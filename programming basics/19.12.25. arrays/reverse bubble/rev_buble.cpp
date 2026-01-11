#include <iostream>
#include <windows.h>


int main()

{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int h_arr[10] = { 100,15,350,25,859,65,102,356,985,10 };

	int x{0};

	std::cout << "Массив до сортировки: ";

	for (int i = 0; i <= 9; i++)
		std::cout << h_arr[i] << " ";

	do 
	{
		x = 0;
		for (int i = 9; i >=1 ;i--)
		{
			if (h_arr[i] < h_arr[i - 1])
			{
				x = h_arr[i - 1];
				h_arr[i - 1] = h_arr[i];
				h_arr[i] = x;
			}
		}
	}
		while (x != 0);

	std::cout << "\nМассив после сортировки: ";

	for (int i = 0; i <= 9; i++)
		std::cout << h_arr[i] << " ";

	std::cout << "\n";

	return 0;

}