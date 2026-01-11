#include <iostream>
#include <array>
#include <windows.h>

template <size_t quant>
void reverse(std::array<int, quant> arr);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::array<int, 9> some_arr{ 1,2,3,4,5,6,7,8,9 };
	
	reverse(some_arr);

	return 0;
}

template <size_t quant>
void reverse(std::array<int, quant> arr)
{
	std::array<int, quant> second_arr{};

	int j = quant-1;

	std::cout << "До функции reverse: ";
	for (int i = 0; i < quant; i++)
	{
		second_arr.at(j) = arr[i];
		std::cout << arr[i] << " ";
		j--;
	}

	std::cout << "\n";

	arr = second_arr;

	std::cout << "После функции reverse: ";
	for (int i = 0; i < quant; i++)
		std::cout << arr[i] << " ";

	std::cout << "\n";
}