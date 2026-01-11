#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
#include <array>

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int count_number{};
	std::string count{};
	
	std::ifstream fin("in.txt");

	if (fin.is_open())
	{
		fin >> count;
		count_number = std::stoi(count);
		std::string* arr = new std::string[count_number];

		for (int i{ 0 }; i < count_number; i++)
		{
			if (!fin.eof())
			{
				fin >> count;
				arr[i] = count;
			}
		}

		for (int i{ count_number - 1 }; i >= 0; i--)
		{
			std::cout << arr[i] + " ";
		}

		std::cout << "\n";

	}
	else std::cout << "Ошибка при чтении файла!" << std::endl;

	fin.close();

	return 0;
}
