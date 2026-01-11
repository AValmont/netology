#include <iostream>
#include <windows.h>
#include <string>


namespace Addition {
    int calc(int x, int y) {
        return x+y;
    }
}
 
namespace Subtraction {
    int calc(int x, int y) {
        return x-y;
    }
}

namespace Multiplication {
    int calc(int x, int y) {
        return x*y;
    }
}

namespace Division {
    int calc(int x, int y) {
        return x/y;
    }
}

int main() {
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x = 7;
    int y = 5;
    int result[4];
    std::string implementaion[4]{"Сложение: ", "Вычитание: ", "Умножение: ", "Деление: "};


    std::cout << "x = 7, y = 5" << std::endl;
    result[0] = Addition::calc(x, y);
    result[1] = Subtraction::calc(x, y);
    result[2] = Multiplication::calc(x, y);
    result[3] = Division::calc(x, y);

    for (int i = 0; i < 4; i++)
    {
        std::cout << implementaion[i] << result[i] << std::endl;
    }

    return 0;
}