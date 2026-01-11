#include <iostream>
#include <Windows.h>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    
    std::cout << "Введите число:" << std::endl;
    std::cin >> num;
    std::cout << "Вы ввели: " << num << std::endl;

    std::cout << "Введите слово:" << std::endl;
    std::string new_word;
    std::cin >> new_word;
    std::cout << "Вы ввели: " << new_word << std::endl;
    
    return EXIT_SUCCESS;
}
