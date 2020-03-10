/*
 * SalesManager.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef SALESMANAGER_H_
#define SALESMANAGER_H_
#include "Salesman.h"
#include"Manager.h"

class Sales_Manager :public Manager,public Salesman {
public:
	Sales_Manager();
	Sales_Manager(int id,float salary,float bonus,float comm);
	void accept();
	void display();

	virtual ~Sales_Manager();
};

#endif /* SALESMANAGER_H_ */
