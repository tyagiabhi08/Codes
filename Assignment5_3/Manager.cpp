/*
 * Manager.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include "Manager.h"
#include"Employee.h"
#include<iostream>
#include<cstring>
using namespace std;

Manager::Manager()
{
  cout<<"Manager() ctor"<<endl;

   this->bonus=0.0f;

}


Manager::Manager(int id,float salary,float bonus):Employee(id,salary)
{
cout<<"Manager(int id,float salaryfloat bonus) ctor"<<endl;


	this->bonus=bonus;
}



	void Manager::setBonus(float bonus)
	{     this->bonus=bonus;
	}

	float Manager::getBonus()
	{
     return this->bonus;
	}

	void Manager::accept()
	{
		float bonus;
	   Employee::accept();
	   cout<<"Bonus :"<<endl;
	   cin>>bonus;
	   this->setBonus(bonus);

	}
	void Manager::display()
	{
		Employee::display();
		 cout<<"Bonus :"<<getBonus()<<endl;


	}


	void Manager::accept_manager()
{
		        cout<<"Bonus :"<<endl;
			   cin>>bonus;
			   this->setBonus(bonus);


}
 void Manager::display_manager()
{
	 cout<<"Bonus:"<<this->bonus<<endl;
}
Manager::~Manager()
{
	cout<<"~Manager() dtor"<<endl;
}
