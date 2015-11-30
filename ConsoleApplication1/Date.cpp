#include "Date.h"
#include <iostream>


Date::Date():
	day(1), month(1), year(1900)
{
}

Date::Date(int dd, int mm, int yy):
	day(dd), month(mm), year(yy)
{
}


Date::~Date()
{
}

int Date::getDay() const
{
	return day;
}

int Date::getMonth() const
{
	return month;
}

int Date::getYear() const
{
	return year;
}

void Date::print(std::ostream& out)
{
	out << day << '/' << month << '/' << year << std::endl;
}

void Date::next_day()
{
	int days_in_month;
	day++;
	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days_in_month = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days_in_month = 30;
		break;
	case 2:
		if (leap_year())
			days_in_month = 29;
		else days_in_month = 28;
		break;
	}
	if (day > days_in_month) {
		day = 1;
		month++;
		if (month > 12) {
			month = 1;
			year++;
		}
	}
}

bool Date::leap_year()
{
	if (year % 400 == 0)
		return true;
	else if (year % 100 == 0)
		return false;
	else if (year % 4 == 0)
		return true;
	else return false;
}
