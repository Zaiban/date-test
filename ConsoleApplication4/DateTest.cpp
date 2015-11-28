#include "stdafx.h"

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


int main(int ac, char* av[]) {
	testing::InitGoogleTest(&ac, av);
	return RUN_ALL_TESTS();
}