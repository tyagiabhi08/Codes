/*
 * Date.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */


#include "Date.h"
#include<iostream>
using namespace std;

Date::Date()
{
	cout<<"Date() ctor"<<endl;
  this->day=0;
  this->month=0;
  this->year=0;

}

Date:: Date(int day,int month,int year)
{
	cout<<" Date(int day,int month,int year) ctor"<<endl;
this->day=day;
this->month=month;
this->year=year;
}
    void Date::setDay(int day)
    {
    	this->day=day;

    }
	void Date::setMonth(int month)
	{
		this->month=month;

	}
	void Date::setYear(int year)
	{
		this->year=year;

	}
	   int Date::getDay()
	   {
		   return this->day;

	   }
		int Date::getMonth()
		{
			return this->month;

		}
		int Date::getYear()
		{
			return this->year;
		}

	void Date::accept()
	{
		cout<<"Day :"<<endl;
		cin>>this->day>>this->month>>this->year;

	}
	void Date::display()
	{
		cout<<"Date :"<<this->day<<"-"<<this->month<<"-"<<this->year<<endl;
	}
Date::~Date()
{
cout<<"~Date()"<<endl;

}

