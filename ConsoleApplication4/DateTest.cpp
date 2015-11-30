#include "stdafx.h"

#include <gtest/gtest.h>
#include "weekLater.h"

TEST(NextDayTest, leap_years) {

	Date date = Date(28, 2, 400);
	date.next_day();
	EXPECT_EQ(29, date.getDay());
	EXPECT_EQ(2, date.getMonth());

	date = Date(28, 2, 404);
	date.next_day();
	EXPECT_EQ(29, date.getDay());
	EXPECT_EQ(2, date.getMonth());

	date = Date(28, 2, 500);
	date.next_day();
	EXPECT_EQ(1, date.getDay());
	EXPECT_EQ(3, date.getMonth());

}

TEST(NextDayTest, whole_year){

	Date date = Date(1, 1, 1900);
	for (int i = 0; i < 365; i++){
		date.next_day();
	}
	EXPECT_EQ(1, date.getDay());
	EXPECT_EQ(1, date.getMonth());
	EXPECT_EQ(1901, date.getYear());
}

TEST(NextDayTest, def_cstrt_print){

	Date date;
	std::stringstream strm;
	date.print(strm);
	EXPECT_STREQ("1/1/1900\n", strm.str().c_str());
}

TEST(weekLaterTest, basic){
	Date d1 = Date(1, 1, 2000);
	Date d2;
	d2 = weekLater(d1);
	EXPECT_EQ(8, d2.getDay());
	EXPECT_EQ(1, d2.getMonth());
	EXPECT_EQ(2000, d2.getYear());
}


int main(int ac, char* av[]) {
	testing::InitGoogleTest(&ac, av);
	return RUN_ALL_TESTS();
	/*
	Date date;
	date.print(std::cout);
	system("PAUSE");
	return 0;
	*/
}