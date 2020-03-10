/*
 * Salesman.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef SALESMAN_H_
#define SALESMAN_H_

#include"Employee.h"

class Salesman :virtual public Employee
{
private:

	float comm;

public:
	Salesman();
	Salesman(int id,float salary,float comm);

	void setcomm(float comm);
	float getcomm();
	void accept();
	void display();

	~Salesman();

protected :
	void accept_salesman();
		void display_salesman();

};

#endif /* SALESMAN_H_ */
