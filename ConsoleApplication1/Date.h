#pragma once
class Date
{
public:
	Date();
	Date(int dd, int mm, int yy);
	~Date();
	int getDay() const;
	int getMonth() const;
	int getYear() const;

	void print();
	void next_day();

private:
	int day;
	int month;
	int year;

	bool leap_year();
};

