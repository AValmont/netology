#include <iostream>

int main()
{
	int int_arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i <= 9; i++)
	{
		if (i < 9)
			std::cout << int_arr[i] << ", ";
		else
			std::cout << int_arr[i] << std::endl;
	}
	return 0;
}