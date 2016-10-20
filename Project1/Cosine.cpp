#include "Cosine.h"

Cosine::Cosine() : Function(), phaseShift(0.0)
{
	std::cout << "[DEFAULT] Generating new cosine function with phase shift of " << phaseShift << std::endl;
}

Cosine::Cosine(double coefficient, double phaseShift) : Function(coefficient), phaseShift(phaseShift)
{
	std::cout << "[INIT-LIST] Generating new cosine function with phase shift of " << phaseShift << std::endl;
}


Cosine::Cosine(const Cosine &cosine) : phaseShift(cosine.phaseShift), Function(cosine)
{
	std::cout << "[COPY] Generating new cosine function with phase shift of " << cosine.phaseShift << std::endl;
}

Cosine::~Cosine()
{
	std::cout << "[DTOR] Destructing cosine function with phase shift of " << phaseShift << std::endl;
}

double Cosine::calculate(double point) {
	return coefficient * sin(point + phaseShift);
}

Function * Cosine::derivative()
{
	return nullptr;
}

void Cosine::read()
{
	std::cout << "[CREATING COSINE FUNCTION]" << std::endl;
	std::cout << "Input cosine coefficient: ";
	coefficient = Util::readDouble();
	std::cout << "Input cosine phaseShift: ";
	phaseShift = Util::readDouble();
}

void Cosine::print()
{
	std::cout << coefficient << "*cos(x + " << phaseShift << ")";
}

Function* Cosine::clone() {
	return nullptr;
}