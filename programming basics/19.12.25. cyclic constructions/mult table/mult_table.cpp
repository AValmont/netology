#include <iostream>
#include <cmath>

int main()
{
	setlocale(LC_CTYPE, "rus");

	int number;
	int inc;

	std::cout << "¬ведите целое число:" << std::endl;
	std::cin >> number;

	for (inc = 1;inc <= 10;++inc)
	{
		std::cout << "7 x " << inc << " = " << number * inc << std::endl;
	}

	return 0;
}