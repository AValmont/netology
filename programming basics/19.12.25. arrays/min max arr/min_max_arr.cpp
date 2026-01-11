#include <iostream>

int main()
{

	setlocale(LC_CTYPE, "rus");
	int int_arr[10] = {5,8,9,15,45,36,952,785,15,20};
	int max_arr;
	int min_arr;

	for (int i = 0; i <= 9; i++)
	{
		int pl_arr{ 0 };
		int mn_arr{ 0 };

		for (int j = 0; j <= 9; j++)
		{
			if (int_arr[i] >= int_arr[j]) pl_arr++;
			if (int_arr[i] <= int_arr[j]) mn_arr++;
		}

		if (pl_arr == 10) max_arr = int_arr[i];
		if (mn_arr == 10) min_arr = int_arr[i];

		if (i < 9)
			if (i == 0) std::cout << "Массив: " << int_arr[i] << " ";
			else std::cout << int_arr[i] << " ";
		else
			std::cout << int_arr[i] << std::endl;
	}

	std::cout << "Минимальный элемент: " << min_arr << std::endl;
	std::cout << "Максимальный элемент: " << max_arr << std::endl;

}