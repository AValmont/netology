#include <iostream>
#include <array>
#include <span>

void print(std::span<int> data);

int main()
{
	std::array<int, 9> arr_01{1,2,3,4,5,6,7,8,9};
	std::array<int, 4> arr_02{6,5,4,8};
	std::array<int, 5> arr_03{1,4,3,7,5};

	print(arr_01);
	print(arr_02);
	print(arr_03);

	return 0;
}

void print(std::span<int> data)
{
	for (int i{ 0 }; i < data.size();i++)
		std::cout << data[i] << " ";

	std::cout << "\n";
}

