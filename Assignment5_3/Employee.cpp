/*
 * Employee.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */


#include "Employee.h"
#include<iostream>
using namespace std;
Employee::Employee() {

	cout<<"Employee() ctor"<<endl;
	this->id=0;
	this->salary=0.0f;

}
Employee::Employee(int id,float salary)
 {
	cout<<"Employee(int id,float salary) ctor"<<endl;
this->id=id;
this->salary=salary;

}

	void Employee::setId(int id)
	{

		this->id=id;

	}

	void Employee::setSalary(float salary)
	{
	this->salary = salary;

}
	int Employee::getId()
	{
        return this->id;
	}
	float Employee::getSalary()
	{
return this->salary;
	}
	void Employee::accept()
	{
		cout<<"Id :"<<endl;
		cin>>id;
		cout<<"Salary :"<<endl;
		cin>>salary;

	}
	void Employee::display()
	{
           cout<<"Id :"<<this->id<<endl;
           cout<<"Salary :"<<this->salary<<endl;
	}
Employee::~Employee()
{
	cout<<"~Employee()  dtor"<<endl;
}

