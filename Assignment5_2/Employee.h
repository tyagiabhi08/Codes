/*
 * Employee.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include"Date.h"
#include"Person.h"
class Employee : public Person
{
private:
	int id;
	float sal;
	char dept[20];
	Date joining;
public:
	Employee();
//  Employee(int id,float sal,const char* dept,Date joining);
//	Employee(int id,float sal,const char* dept,int join_day,int join_month,int join_year);
	Employee(int id,float sal,const char* dept,int join_day,int join_month,int join_year,const char* name,const char* address ,int birth_day,int birth_month,int birth_year);
	void setid(int id);
	void setsal(float sal);
	void setdept(const char* dept);
	int getid();
	float getsal();
	const char* getdept();
	void accept();
	void display();
	~Employee();
};

#endif /* EMPLOYEE_H_ */
