#include <iostream>
#include <windows.h>
#include <string>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name{};
	std::string surname{};
	
	std::cout << "¬ведите им€: ";
	std::cin >> name;
	std::cout << "¬ведите фамилию: ";
	std::cin >> surname;
	std::cout << "«дравствуйте, "+ name + " " + surname + "!" << std::endl;

	return 0;
}