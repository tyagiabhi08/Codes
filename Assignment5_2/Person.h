/*
 * Person.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef PERSON_H_
#define PERSON_H_

#include"Date.h"
class Person
{
	char name[20];
	char address[20];
	Date birthdate;
public:
	Person();
	//Person(const char* name,const char* address,Date birthdate);
	Person(const char* name,const char* address,int birth_day,int birth_month,int birth_year);
	void setname(const char* name);
	void setaddress(const char* address);
	Date setbirthdate(Date birthdate);
	const char* getname();
	const char* getaddress();
	Date getbirthdate();
	void accept();
	void display();
	~Person();
};

#endif /* PERSON_H_ */
