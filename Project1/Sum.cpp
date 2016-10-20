#include "Sum.h"



Sum::Sum() : Function(), left(nullptr), right(nullptr) {}

Sum::Sum(double coefficient, Function* left, Function *right) : Function(coefficient), left(left), right(right) {}

Sum::Sum(const Sum &sum) : Function(sum.coefficient)
{
	left = sum.left->clone();
	right = sum.right->clone();
}


Sum::~Sum()
{
	delete left;
	delete right;
}

void Sum::setLeft(Function *left)
{
	this->left = left;
}

void Sum::setRight(Function *right)
{
	this->right = right;
}

Function* Sum::getLeft()
{
	return left;
}

Function* Sum::getRight()
{
	return right;
}

double Sum::calculate(double point)
{
	return left->calculate(point) + right->calculate(point);
}

Function* Sum::derivative()
{
	return nullptr;
}

void Sum::read()
{
	// should not be available
}

void Sum::print()
{
	std::cout << "(";
	left->print();
	std::cout << " + ";
	right->print();
	std::cout << ")";
}

Function * Sum::clone()
{
	return new Sum(*this);
}
