#include <iostream>


void swap(int *a, int* b);

int main(int argc, char** argv)
{
	int a = 5, b = 8;

	int *pa	{ &a };
	int *pb{ &b };

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(pa, pb);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return 0;
}

void swap(int *a, int *b)
{
	if (a != b) {
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
	}
}