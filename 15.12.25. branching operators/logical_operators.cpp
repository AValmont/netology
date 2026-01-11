#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	bool a = true;
	bool b = true;
	bool c = false;
	bool d = false;
	bool f= false;
	bool g = true;
	
	std::cout << "Оператор: ||" << std::endl;
	std::cout << std::boolalpha << (a || b) << " " << (a || c) << " " << (b || c) << std::endl;
	std::cout << std::boolalpha << (c || d) << " " << (a || c) << " " << (b || c) << std::endl;
	std::cout << std::boolalpha << (a || d) << " " << (d || c) << " " << (b || c) << std::endl;
	std::cout << std::boolalpha << (c || d) << " " << (d || c) << " " << (f || c) << std::endl;
	
	std::cout << "\n";

	std::cout << "Оператор: &&" << std::endl;
	std::cout << std::boolalpha << (a && b) << " " << (a && g) << " " << (b && g) << std::endl;
	std::cout << std::boolalpha << (a && c) << " " << (a && b) << " " << (b && c) << std::endl;
	std::cout << std::boolalpha << (a && b) << " " << (a && c) << " " << (b && c) << std::endl;
	std::cout << std::boolalpha << (a && c) << " " << (a && d) << " " << (a && f) << std::endl;

	return EXIT_SUCCESS;

}
