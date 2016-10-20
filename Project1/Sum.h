#pragma once
#include "Function.h"

class Sum :
	public Function
{
public:
	Sum();
	Sum(double, double);
	Sum(const Sum&);
	virtual ~Sum();

	virtual double calculate(double);
	virtual Function* derivative();

	virtual void read();
	virtual void print();
};

