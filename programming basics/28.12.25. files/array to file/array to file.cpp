#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <windows.h>
#include <algorithm>

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int	size{}, arr_var{};
	std::cout << "¬ведите размер массива: ";
	std::cin >> size;
	int* arr = new int[size];

	for (int i{ 0 }; i < size;i++)
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> arr_var;
		arr[i] = arr_var;
	}

	std::ofstream fout("out.txt");

	fout << std::to_string(size) << std::endl;

	std::reverse(arr, arr + size);

	for (int i{0}; i <size;i++)
		fout << std::to_string(arr[i]) + " ";

	//for (int i{ size-1 }; i >=0;i--)
	//	fout << std::to_string(arr[i]) + " ";

	fout.close();
	return 0;
}