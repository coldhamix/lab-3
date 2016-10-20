#include "Util.h"

double Util::readDouble()
{
	double result = 0;
	std::string input;
	bool validDouble = false;

	while (!validDouble) {
		std::cin >> input;
		try {
			result = std::stod(input);
			validDouble = true;
		}
		catch (...) {
			validDouble = false;
			std::cout << "Invalid number. Try again." << std::endl;
		}
	}

	return result;
}
