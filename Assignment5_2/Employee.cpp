/*
 * Employee.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include "Employee.h"

#include<iostream>
using namespace std;
#include<cstring>
Employee::Employee()
{
	cout<<"Employee() ctor"<<endl;
	this->id=0;
	this->sal=0.0f;
	strcpy(this->dept," ");

}
/*Employee::Employee(int id,float sal,const char* dept,Date joining)
{
	cout<<"Employee(int id,float sal,const char* dept,Date joining) ctor"<<endl;
  this->id=id;
  this->sal=sal;
  strcpy(this->dept,dept);
  this->joining=joining;

}*/
/*Employee::Employee(int id,float sal,const char* dept,int join_day,int join_month,int join_year):joining(join_day,join_month,join_year)
	{
	cout<<"Employee(int id,float sal,const char* dept,int join_day,int join_month,int join_year) ctor"<<endl;
	  this->id=id;
	  this->sal=sal;
	  strcpy(this->dept,dept);
	}*/



Employee::Employee(int id,float sal,const char* dept,int join_day,int join_month,int join_year,const char* name,const char* address ,int birth_day,int birth_month,int birth_year)
:joining(join_day,join_month,join_year),Person(name,address,birth_day,birth_month,birth_year)
{

	     this->id=id;
		 this->sal=sal;
		 strcpy(this->dept,dept);
}
void Employee::setid(int id)
	{
      this->id=id;

	}
	void Employee::setsal(float sal)
	{
		this->sal=sal;

	}
	void Employee::setdept(const char* dept)
	{
		 strcpy(this->dept,dept);
	}
	int Employee::getid()
	{
       return this->id;

	}
	float Employee::getsal()
	{
		return this->sal;

	}
	const char* Employee::getdept()
	{
       return this->dept;
	}
	void Employee::accept()
	{
       cout<<"Id :"<<endl;
       cin>>id;
       cout<<"SAL :"<<endl;
       cin>>sal;
       cout<<"Dept :"<<endl;
       cin>>dept;
       cout<<"Enter joining Details :"<<endl;
       joining.accept();
       Person::accept();

	}
	void Employee::display()
	{
		cout<<"Id :"<<this->id<<endl;
		cout<<"SAL :"<<this->sal<<endl;
		 cout<<"Dept :"<<this->dept<<endl;
		joining.display();
		Person::display();
	}
Employee::~Employee()
{
	cout<<"~Employee() dtor"<<endl;
}

