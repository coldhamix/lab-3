#include "Sine.h"

Sine::Sine() : Function(0.0), phaseShift(0.0)
{
	std::cout << "[DEFAULT] Generating new sine function with phase shift of " << phaseShift << std::endl;
}

Sine::Sine(double coefficient, double phaseShift) : Function(coefficient), phaseShift(phaseShift)
{
	std::cout << "[INIT-LIST] Generating new sine function with phase shift of " << phaseShift << std::endl;
}


Sine::Sine(const Sine &sine) : phaseShift(sine.phaseShift), Function(sine)
{
	std::cout << "[COPY] Generating new sine function with phase shift of " << sine.phaseShift << std::endl;
}

Sine::~Sine()
{
	std::cout << "[DTOR] Destructing sine function with phase shift of " << phaseShift << std::endl;
}

double Sine::calculate(double point) {
	return coefficient * sin(point + phaseShift);
}

Function * Sine::derivative()
{
	return nullptr;
}

void Sine::read()
{
	std::cout << "Input sine coefficient: ";
	coefficient = Util::readDouble();
	std::cout << "Input sine phaseShift: ";
	phaseShift = Util::readDouble();
}

void Sine::print()
{
	std::cout << coefficient << "*sin(x + " << phaseShift << ")";
}
