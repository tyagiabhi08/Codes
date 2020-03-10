/*
 * Date.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef DATE_H_
#define DATE_H_

class Date {
private:
	int day;
	int month;
	int year;

public:
	Date();
	Date(int day,int month,int year);
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	int getDay();
	int getMonth();
	int getYear();
	void accept();
	void display();

 ~Date();
};

#endif /* DATE_H_ */
