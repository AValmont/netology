#include <iostream>
#include <string>
#include <cmath>

int main()
{
	setlocale(LC_CTYPE, "rus");

	int number;
	int sum_numbers{0};
	int inc;
	int st;

	std::string str_number;
	
	std::cout << "Введите целое число:" << std::endl;
	std::cin >> number;
	str_number = std::to_string(number);

	for (inc = 1; inc <= str_number.length();inc++)
	{
		st = pow(10, inc);
		sum_numbers += 10*(number%st)/st;
	}

	std::cout << "Сумма цифр: " << sum_numbers;

	return 0;

}