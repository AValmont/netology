#include <iostream>
#include <windows.h>

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number_01;
    int number_02;


    int number_01_real;
    int number_02_real;

    std::string res_01;
    std::string res_02;

    std::cout << "Введите целое число: ";
    std::cin >> number_01_real;
    std::cout << "Введите целое число: ";
    std::cin >> number_02_real;

    if (number_01_real < -100 || number_01_real > 100 || number_02_real < -100 || number_02_real > 100) {
       std::cout << "Ошибка! Одно из чисел вне диапазона!\n";
       return EXIT_SUCCESS;
    }

    if (number_01_real < 0) number_01 = -number_01_real; else number_01 = number_01_real;
    if (number_02_real < 0) number_02 = -number_02_real; else number_02 = number_02_real;

    switch ((number_01 % 100) / 10)
    {
    case 2: res_01 = "двадцать "; break;
    case 3: res_01 = "тридцать "; break;
    case 4: res_01 = "сорок "; break;
    case 5: res_01 = "пятдесят "; break;
    case 6: res_01 = "шестьдесят "; break;
    case 7: res_01 = "семьдесят "; break;
    case 8: res_01 = "восемьдесят "; break;
    case 9: res_01 = "девяносто "; break;
    }

    if (number_01 % 100 >= 10 && number_01 % 100 < 20) {
        switch (number_01 % 100) {
        case 10: res_01 = "десять"; break;
        case 11: res_01 = "одинадцать"; break;
        case 12: res_01 = "двенадцать"; break;
        case 13: res_01 = "тринадцать"; break;
        case 14: res_01 = "четырнадцать"; break;
        case 15: res_01 = "пятнадцать"; break;
        case 16: res_01 = "шестнадцать"; break;
        case 17: res_01 = "семнадцать"; break;
        case 18: res_01 = "восемнадцать"; break;
        case 19: res_01 = "девятнадцать"; break;
        }
    }
    else {
        switch (number_01 % 10)
        {
        case 1: res_01 = res_01 + "один"; break;
        case 2: res_01 = res_01 + "два"; break;
        case 3: res_01 = res_01 + "три"; break;
        case 4: res_01 = res_01 + "четыре"; break;
        case 5: res_01 = res_01 + "пять"; break;
        case 6: res_01 = res_01 + "шесть"; break;
        case 7: res_01 = res_01 + "семь"; break;
        case 8: res_01 = res_01 + "восемь"; break;
        case 9: res_01 = res_01 + "девять"; break;
        }
    }

    switch ((number_02 % 100) / 10)
    {
    case 2: res_02 = "двадцать "; break;
    case 3: res_02 = "тридцать "; break;
    case 4: res_02 = "сорок "; break;
    case 5: res_02 = "пятдесят "; break;
    case 6: res_02 = "шестьдесят "; break;
    case 7: res_02 = "семьдесят "; break;
    case 8: res_02 = "восемьдесят "; break;
    case 9: res_02 = "девяносто "; break;
    }

    if (number_02 % 100 >= 10 && number_02 % 100 < 20) {
        switch (number_02 % 100) {
        case 10: res_02 = "десять"; break;
        case 11: res_02 = "одинадцать"; break;
        case 12: res_02 = "двенадцать"; break;
        case 13: res_02 = "тринадцать"; break;
        case 14: res_02 = "четырнадцать"; break;
        case 15: res_02 = "пятнадцать"; break;
        case 16: res_02 = "шестнадцать"; break;
        case 17: res_02 = "семнадцать"; break;
        case 18: res_02 = "восемнадцать"; break;
        case 19: res_02 = "девятнадцать"; break;
        }
    }
    else {
        switch (number_02 % 10)
        {
        case 1: res_02 = res_02 + "один"; break;
        case 2: res_02 = res_02 + "два"; break;
        case 3: res_02 = res_02 + "три"; break;
        case 4: res_02 = res_02 + "четыре"; break;
        case 5: res_02 = res_02 + "пять"; break;
        case 6: res_02 = res_02 + "шесть"; break;
        case 7: res_02 = res_02 + "семь"; break;
        case 8: res_02 = res_02 + "восемь"; break;
        case 9: res_02 = res_02 + "девять"; break;
        }
    }

    if (number_01_real < 0) res_01 = "минус " + res_01;

    if (number_02_real < 0) res_02 = "минус " + res_02;
    

    
    if (number_01_real > number_02_real)
    {
        std::cout << res_01 + " больше чем " + res_02 << std::endl;
    }
    else if (number_01_real < number_02_real)
    {
        std::cout << res_01 + " меньше чем " + res_02 << std::endl;
    }
    else
    {
        std::cout << res_01 + " равно " + res_02 << std::endl;
    };
   
    return EXIT_SUCCESS;
}