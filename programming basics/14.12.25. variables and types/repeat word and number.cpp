#include <iostream>
#include <Windows.h>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    
    std::cout << "Ââåäèòå ÷èñëî:" << std::endl;
    std::cin >> num;
    std::cout << "Âû ââåëè: " << num << std::endl;

    std::cout << "Ââåäèòå ñëîâî:" << std::endl;
    std::string new_word;
    std::cin >> new_word;
    std::cout << "Âû ââåëè: " << new_word << std::endl;
    
    return EXIT_SUCCESS;
}
