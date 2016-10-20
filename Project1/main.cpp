#include <cstdio>

#include "Sine.h"
#include "Cosine.h"

#include "Util.h"

int main() {
	Function *func = new Sine;
	func->read();
	func->print();
	delete func;

	func = new Cosine;
	func->read();
	func->print();
	delete func;

	system("pause");

	return 0;

}