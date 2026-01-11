#include <iostream>
#include <string>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string word{ "книга" };
	std::string entered_word{};

	do
	{
		std::cout << "Угадайте слово: ";
		std::cin >> entered_word;
		if (entered_word == word) std::cout << "Правильно! Вы победили! Загаданное слово — " + word << std::endl;
		else std::cout << "Неправильно" << std::endl;
	} while (entered_word != word);

}