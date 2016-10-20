#pragma once
#include <iostream>

class Function
{
protected:
	double coefficient;
public:
	Function();
	Function(double);
	Function(const Function&);
	virtual ~Function();
	
	double getCoefficient();
	void setCoefficient(double);

	virtual double calculate(double) = 0;
	virtual Function* derivative() = 0;

	virtual void read() = 0;
	virtual void print() = 0;

	virtual Function* clone() = 0;
};

