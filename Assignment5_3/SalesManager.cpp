/*
 * SalesManager.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include "SalesManager.h"
#include"Employee.h"
Sales_Manager::Sales_Manager()
{

}
Sales_Manager::Sales_Manager(int id,float salary,float bonus,float comm):Employee(id,salary),Manager(id,salary, bonus),Salesman( id, salary, comm)
{  }
void Sales_Manager::accept()
{
	Employee::accept();
   Salesman::accept_salesman();
   Manager::accept_manager();
}
	void Sales_Manager::display()
	{
        Employee::display();
	    Salesman::display_salesman();
		Manager::display_manager();
	}
Sales_Manager::~Sales_Manager()
{

}

