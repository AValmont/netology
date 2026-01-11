#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

int main(int argc, char** argv)
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::ifstream file_to_read ("in.txt");
	std::string word{};

	do {
		file_to_read >> word;
		std::cout << word << std::endl;
	} while (!file_to_read.eof());

	file_to_read.close();
	
	return 0;
}