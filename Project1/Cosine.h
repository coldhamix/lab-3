#pragma once
#include "Function.h"
#include "Util.h"
#include <cmath>

class Cosine :
	public Function
{
	double phaseShift;
public:
	Cosine();
	Cosine(double, double);
	Cosine(const Cosine&);
	virtual ~Cosine();

	virtual double calculate(double);
	virtual Function* derivative();

	virtual void read();
	virtual void print();

	virtual Function* clone();
};

