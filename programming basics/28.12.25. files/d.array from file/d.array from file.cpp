#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <algorithm>
#include <windows.h>

int main(int argc, char** argv)
{
	std::ifstream fin("in.txt");
	int row{}, column{};

	if (fin.is_open())
	{
		fin >> row;
		fin >> column;

		int** double_array{ new int* [row] {} };
		for (int i{}; i < row; i++)
		{
			double_array[i] = new int[column] {};
		}

		for (int i{}; i < row; i++)
			for (int j{}; j < column; j++)
				if (!fin.eof()) fin >> double_array[i][j];

		for (int i{}; i < row; i++)
		{
			for (int j{column-1}; j >= 0; j--)
				std::cout << double_array[i][j] << " ";
			std::cout << "\n";
		}
	}
	else std::cout << "Ошибка открытия файла!";

	fin.close();

	return 0;


}