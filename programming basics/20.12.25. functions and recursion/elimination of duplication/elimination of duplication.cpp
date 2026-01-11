#include <iostream>

void degree(int a, int b, int c);

int main(int argc, char** argv)
{

	setlocale(LC_CTYPE, "rus");

	int value = 5, power = 2, result = 1;
	degree(value, power, result);

	value = 3;
	power = 3;
	result = 1;
	degree(value, power, result);

	value = 4;
	power = 4;
	result = 1;
	degree(value, power, result);

	return 0;
}

void degree(int a, int b, int c)
{
	for (int i = 0; i < b; i++)
	{
		c *= a;
	}
	std::cout << a << " в степени " << b << " = " << c << std::endl;
}