#pragma once
#include "Function.h"
#include "Util.h"
#include <cmath>

class Sine :
	public Function
{
	double phaseShift;
public:
	Sine();
	Sine(double, double);
	Sine(const Sine&);
	virtual ~Sine();

	virtual double calculate(double);
	virtual Function* derivative();

	virtual void read();
	virtual void print();
	virtual Function* clone();
};

