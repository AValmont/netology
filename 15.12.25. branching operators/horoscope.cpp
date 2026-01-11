#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string male;
	std::string sign;
	int water_zodiac{0};
	int earth_zodiac{0};
	int age{0};

	std::cout << "Ввдите пол: ";
	std::cin >> male;
	std::cout << "Ввдите знак зодиака: ";
	std::cin >> sign;
	std::cout << "Ввдите возраст: ";
	std::cin >> age;

	if (sign == "рыбы" || sign == "скорпион" || sign == "рак")  
		water_zodiac = 1;

	if (sign == "телец" || sign == "дева" || sign == "козерог")
		earth_zodiac = 1;

	if (male=="м" && age<40 && earth_zodiac==1)
	{
		std::cout << "Ваше предсказание:" << std::endl;
		std::cout<<"Сегодня очень плодотворный день.Можно добиться того, что прежде казалось почти невозможным." << std::endl;
	}
	else if (male == "ж" && age >=15 && age<=30 && water_zodiac == 1)
	{
		std::cout << "Ваше предсказание:" << std::endl;
		std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок." << std::endl;
		std::cout << "Будет не только весело, но и интересно : найдётся дело, которое увлечёт всех." << std::endl;
	}
	else
	{
		std::cout << "Гороскоп для вас находится в разработке.Приходите чуточку позже;)" << std::endl;
	}






}