#pragma once
#include<string>
class Date {
	unsigned short day : 5;
	unsigned short month : 4;
	short year;

public:
	operator string()
	{
		return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
	}
	void SetDates(unsigned short day, unsigned short month, short year);
	void SetDay(unsigned short day);
	void SetMonth(unsigned short month);
	void SetYear(short year);
	unsigned short GetDay() const;
	unsigned short GetMonth() const;
	short GetYear() const;
};

