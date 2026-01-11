#include <iostream>
#include <string>
#include <windows.h>

std::string create_array(int index);
double* generate_array(int index);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int index{};
	std::cout << "Введите размер массива: ";
	std::cin >> index;

	std::cout<<create_array(index)<<"\n";

	std::cout << "Массив: ";
	for (int i = 0; i < index; i++)
		std::cout << std::to_string(static_cast<int>(generate_array(index)[i])) + " ";
	
	std::cout << "\n";
	delete[] generate_array(index);
	return 0;

}

std::string create_array(int index)
{
	double* arr = new double[index] (0);

	std::string result{ "Массив: " };

	for (int i = 0; i < index; i++) 
		result+=std::to_string(static_cast<int>(arr[i]))+" ";
	
	delete[] arr;

	return result+ "\n";

}

double* generate_array(int index)
{
	double* arr = new double[index](0);
	return arr;
}

