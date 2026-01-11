#include <iostream>

int main()
{
	int var_int{0};
	short var_short{};
	long var_long{123456789};
	long long var_llong{987456310123};
	float var_float{0.52f};
	double var_double{25.27};
	long double var_ldouble{258963.258};
	bool var_bool{ false };

	std::cout << "int: " <<&var_int << " " << sizeof(var_int) << std::endl;
	std::cout << "short: " << &var_short << " " << sizeof(var_short) << std::endl;
	std::cout << "long: " << &var_long << " " << sizeof(var_long) << std::endl;
	std::cout << "long long: " << &var_llong << " " << sizeof(var_llong) << std::endl;
	std::cout << "float: " << &var_float << " " << sizeof(var_float) << std::endl;
	std::cout << "double: " << &var_double << " " << sizeof(var_double) << std::endl;
	std::cout << "long double: " << &var_ldouble << " " << sizeof(var_ldouble) << std::endl;
	std::cout << "bool: " << &var_bool << " " << sizeof(var_bool) << std::endl;

	return 0;
}