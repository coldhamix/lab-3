#include "Function.h"



Function::Function() : coefficient(0.0) {
	std::cout << "[DEFAULT] Generating new function with coefficient of " << coefficient << std::endl;
}

Function::Function(double coefficient) : coefficient(coefficient) {
	std::cout << "[INIT-LIST] Generating new function with coefficient of " << coefficient << std::endl;
}

Function::Function(const Function &func) : coefficient(func.coefficient) {
	std::cout << "[COPY] Generating new function with coefficient of " << coefficient << std::endl;
}

Function::~Function()
{
	std::cout << "[DTOR] Destructing function with coefficient of " << coefficient << std::endl;
}



double Function::getCoefficient()
{
	return coefficient;
}

void Function::setCoefficient(double c)
{
	coefficient = c;
}
