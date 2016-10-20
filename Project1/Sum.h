#pragma once
#include "Function.h"

class Sum :
	public Function
{
protected:
	Function *left;
	Function *right;
public:
	Sum();
	Sum(double, Function*, Function*);
	Sum(const Sum&);
	virtual ~Sum();

	void setLeft(Function*);
	void setRight(Function*);

	Function* getLeft();
	Function* getRight();

	virtual double calculate(double);
	virtual Function* derivative();

	virtual void read();
	virtual void print();

	virtual Function* clone();
};

