#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

int** create_two_dim_array(int rows, int columns);
void fill_two_dim_array(int** arr, int rows, int columns);
void print_two_dim_array(int** arr, int rows, int columns);
void delete_two_dim_array(int** arr, int rows, int columns);


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int rows, columns;

	int** array{ new int* [] {} };
		
	std::cout << "Введите количество строк: ";
	std::cin >> rows;
	std::cout << "Введите количество столбцов: ";
	std::cin >> columns;
	array = create_two_dim_array(rows, columns);
	fill_two_dim_array(array, rows, columns);
	print_two_dim_array(array, rows, columns);
	delete_two_dim_array(array, rows, columns);
	delete_two_dim_array(create_two_dim_array(rows, columns), rows, columns);
	return 0;
}

int** create_two_dim_array(int rows, int columns)
{
	int** table_array{ new int* [rows] {} };
	for (int i{}; i < rows; i++)
	{
		table_array[i] = new int[columns] {};
	}
	return table_array;
}

void fill_two_dim_array(int** arr, int rows, int columns)
{
	for (int i{}; i < rows; i++)
		for (int j = 0; j < columns; j++)
			arr[i][j] = (i + 1) * (j + 1);
}

void print_two_dim_array(int** arr, int rows, int columns)
{
	std::cout << "Таблица умножения: \n";
	std::string str{ std::to_string(rows * columns) };
	int number = str.length();

	for (int i{}; i < rows; i++)
	{
		for (int j{}; j < columns; j++)
			std::cout << std::setw(number)<<arr[i][j] << " ";
		std::cout << "\n";
	}
}

void delete_two_dim_array(int** arr, int rows, int columns)
{
	for (int i{}; i < rows; i++) {
		delete arr[i];
	}
	delete[] arr;
}