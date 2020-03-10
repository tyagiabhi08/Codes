/*
 * Person.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include "Person.h"
#include<iostream>
using namespace std;
#include<cstring>

Person::Person()
{
	cout<<"Person() ctor"<<endl;
	strcpy(this->name,"");
	strcpy(this->address," ");

}
/*Person::Person(const char* name,const char* address,Date birthdate)
{
	cout<<"Person(const char* name,const char* address,Date birthdate) ctor"<<endl;
    strcpy(this->name,name);
    strcpy(this->address,address);
    this->birthdate=birthdate;
}*/

Person::Person(const char* name,const char* address,int birth_day,int birth_month,int birth_year):birthdate( birth_day, birth_month,birth_year)
{
	cout<<"Person(const char* name,const char* address,Date birthdate) ctor"<<endl;
    strcpy(this->name,name);
    strcpy(this->address,address);
    //this->birthdate=birthdate;
}


	void Person::setname(const char* name)
	{
		strcpy(this->name,name);

	}
	void Person::setaddress(const char* address)
	{
		 strcpy(this->address,address);
	}
	Date Person::setbirthdate(Date birthdate)
	{
		this->birthdate=birthdate;
	}
	const char* Person::getname()
	{
		return this->name;
	}
	const char* Person::getaddress()
	{
		return this->address;

	}
	Date Person::getbirthdate()
	{
		return this->birthdate;
	}
	void Person::accept()
	{
    cout<<"Name :"<<endl;
    cin>>name;
    cout<<"Address :"<<endl;
    cin>>address;

    birthdate.accept();

	}
	void Person::display()
	{
		    cout<<"Name :"<<this->name<<endl;
		    cout<<"Address :"<<this->address<<endl;
		    birthdate.display();
	}


Person::~Person()
{
	cout<<"~Person()  dtor"<<endl;
}

