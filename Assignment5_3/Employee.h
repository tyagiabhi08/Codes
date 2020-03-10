/*
 * Employee.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee
{
private:
	int id;
	float salary;

public:
	Employee();
	Employee(int id,float salary);
	void setId(int id);
	void setSalary(float salary);
	int getId();
	float getSalary();
	virtual void accept();
	virtual void display();
	virtual ~Employee();
};


#endif /* EMPLOYEE_H_ */
