#include "Date.h"
#include <gtest/gtest.h>

TEST(NdTest, leap400) {
	Date date = Date(28, 2, 400);
	date.next_day();
	EXPECT_EQ(29, date.getDay());
}

int main(int ac, char* av[]) {
	testing::InitGoogleTest(&ac, av);
	return RUN_ALL_TESTS();
}