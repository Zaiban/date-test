#include "weekLater.h"

bool leap_year(int y);

Date weekLater(Date date){
	Date temp;
	int days_in_month;
	int day, month, year;
	day = date.getDay();
	month = date.getMonth();
	year = date.getYear();
	day += 7;
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
		if (leap_year(year))
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
	temp = Date(day, month, year);
	return temp;
}
bool leap_year(int y)
{
	if (y % 400 == 0)
		return true;
	else if (y % 100 == 0)
		return false;
	else if (y % 4 == 0)
		return true;
	else return false;
}