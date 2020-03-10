/*
 * Salesman.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */
#include "Salesman.h"
#include<iostream>
#include<cstring>
using namespace std;

Salesman::Salesman()
{
  cout<<"Salesman() ctor"<<endl;

   this->comm=0.0f;

}


Salesman::Salesman(int id,float salary,float comm):Employee(id,salary)
{
cout<<"Salesman(int id,float salaryfloat comm) ctor"<<endl;


	this->comm=comm;
}



	void Salesman::setcomm(float comm)
	{     this->comm=comm;
	}

	float Salesman::getcomm()
	{
     return this->comm;
	}

	void Salesman::accept()
	{
		Employee::accept();
       cout<<"comm :"<<endl;
       cin>>comm;
	}
	void Salesman::display()
	{
		Employee::display();
       cout<<"comm:"<<this->comm<<endl;
	}

void Salesman::accept_salesman()
{

	cout<<"Comm :"<<endl;
	cin>>comm;


}
void Salesman::display_salesman()
{

		cout<<"Comm :"<<this->comm<<endl;


}
Salesman::~Salesman()
{
	cout<<"~Salesman() dtor"<<endl;
}


