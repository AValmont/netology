#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int first;
	int second;
	int third;

	std::cout << "¬ведите первое число: ";
	std::cin >> first;
	std::cout << "¬ведите второе число: ";
	std::cin >> second;
	std::cout << "¬ведите третье число: ";
	std::cin >> third;

	//first option:

	std::string result_01;
	std::string result_02;

	 result_01 = (first > second) && (second > third) ? std::to_string(first) + " " + std::to_string(second) + " " + std::to_string(third)
		: (first > third) && (third > second) ? std::to_string(first) + " " + std::to_string(third) + " " + std::to_string(second)
		: (second > first) && (first > third) ? std::to_string(second) + " " + std::to_string(first) + " " + std::to_string(third)
		: (second > third) && (third > first) ? std::to_string(second) + " " + std::to_string(third) + " " + std::to_string(first)
		: (third > second) && (second > first) ? std::to_string(third) + " " + std::to_string(second) + " " + std::to_string(first)
		: std::to_string(third) + " " + std::to_string(first) + " " + std::to_string(second);

	 std::cout << "–езультат: " + result_01;

	 //second option

	 int res_01;
	 int res_02;

	 res_01 = first > second ? first : second;
	 res_01 = res_01 > third ? res_01 : third;

	 res_02 = first < second ? first : second;
	 res_02 = res_02 < third ? res_02 : third;
	 
	 result_02 = (first > res_02) && (first < res_01) ? std::to_string(res_01) + " " + std::to_string(first) + " " + std::to_string(res_02)
		 : (second > res_02) && (second < res_01) ? std::to_string(res_01) + " " + std::to_string(second) + " " + std::to_string(res_02)
		 : (third > res_02) && (third < res_01) ? std::to_string(res_01) + " " + std::to_string(third) + " " + std::to_string(res_02)
		 :"";

	 std::cout << "\n–езультат: " + result_02;

	return EXIT_SUCCESS;

}