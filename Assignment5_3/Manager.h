/*
 * Manager.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef MANAGER_H_
#define MANAGER_H_

#include"Employee.h"

class Manager :virtual public Employee
{
private:
	float bonus;

public:
	Manager();
	Manager(int id,float salary,float bonus);

	void setBonus(float bonus);
	float getBonus();
	void accept();
	void display();
	~Manager();
protected :
	void accept_manager();
	void display_manager();


};

#endif /* MANAGER_H_ */
