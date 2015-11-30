#pragma once
#include <sstream>
class Date
{
public:
	Date();
	Date(int dd, int mm, int yy);
	Date(const Date &org);
	~Date();
	Date& operator=(const Date &source);

	int getDay() const;
	int getMonth() const;
	int getYear() const;

	void print(std::ostream& out);
	void next_day();

private:
	int day;
	int month;
	int year;

	bool leap_year();
};

