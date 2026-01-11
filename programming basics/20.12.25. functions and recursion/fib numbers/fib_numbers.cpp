#include <iostream>
#include <string>
#include <windows.h>

long fib_numbers(int index);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int f_index{ 0 };
	std::cout << "Введите число: ";
	std::cin >> f_index;
	std::cout << "Числа Фибоначчи: ";
	for (int i = 0;i < f_index; i++)
		{
			std::cout << std::to_string(fib_numbers(i)) + " ";
		}

	return 0;
}

long fib_numbers(int index)
{
	if (index == 0 || index == 1) return index;
	else
		return fib_numbers(index - 1) + fib_numbers(index - 2);
}