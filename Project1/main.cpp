#include <cstdio>

#include "Sine.h"
#include "Cosine.h"
#include "Sum.h"

#include "Util.h"

int main() {
	Function *func = new Sine;
	func->setCoefficient(3);
	
	Function *func2 = func->clone();
	func2->setCoefficient(5);
	
	Sum *sum = new Sum;
	sum->setLeft(func);
	sum->setRight(func2);

	sum->print();
	std::cout << "Sum: " << sum->calculate(1.57) << std::endl;
	
	delete sum;

	system("pause");

	return 0;

}