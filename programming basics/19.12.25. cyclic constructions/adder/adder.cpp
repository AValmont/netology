#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "rus");
	int input_number;
	int sum_num{ 0 };

	do {
		std::cout << "¬ведите целое число или число '0', чтобы закончить:" << std::endl;
		std::cin >> input_number;
		sum_num =sum_num + input_number;
	} while (input_number != 0);

	std::cout << "—умма: " << sum_num;
	return 0;

}