#include <iostream>
#include <vector>
#include <span>
#include <windows.h>

void input(std::span<int> data, int* arr, int index);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int index, option;
	std::vector <int> entered_vector(0);
	int *entered_array = new int{};

	std::cout << "Введите размер массива: ";
	std::cin >> index;
	
	do
	{
		std::cout << "\nВыберите вариант: " << std::endl;
		std::cout << "содание через <vector>: нажмите 1 " << std::endl;
		std::cout << "содание через <array>: нажмите 2 " << std::endl;
		std::cin >> option;

		if (option != 1 && option != 2) std::cout << "Возможны только варианты: 1 или 2" << std::endl;
	} while (option != 1 && option!=2);

	switch (option)
	{
		case 1:
			std::cout << "Версия 1 <vector>: " << std::endl;
			entered_vector.resize(index);
			input(entered_vector, entered_array, index);
			for (int i=0; i<index; i++)
				std::cout << entered_vector[i] << " ";
			std::cout << "\n";
			break;
		case 2:
			std::cout << "Версия 2 <array>: " << std::endl;
			int* entered_array = new int[index];
			input(entered_vector, entered_array, index);
			for (int i = 0; i < index; i++)
				std::cout << entered_array[i] << " ";
			std::cout << "\n";
			break;
	}
	delete entered_array;
	entered_vector.clear();
	return 0;
}


void input(std::span<int> data, int* arr, int index)
{
	int arr_var;
	int *entered_array = new int[index];
	std::string str_name{};

	if (data.size() != 0) str_name = "vector[";
	else str_name = "array[";

		for (int i = 0; i < index; i++)
		{
			std::cout << "entered_"+ str_name << i << "] = ";
			std::cin >> arr_var;
			entered_array[i] = arr_var;
		}

		std::cout << "Введенный массив: ";

		for (int i = 0; i < index; i++)
		{
			if (data.size() != 0) data[i] = entered_array[i];
			else arr[i] = entered_array[i];
		}
		delete entered_array;
	}
