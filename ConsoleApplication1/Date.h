#pragma once
class Date
{
public:
	Date();
	~Date();

	void print();
	void next_day();

private:
	int day;
	int month;
	int year;

	bool leap_year();
};

