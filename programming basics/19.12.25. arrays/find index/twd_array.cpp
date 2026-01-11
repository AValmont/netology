#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "rus");

	int twd_arr[3][6] = { {1,2,3,4,5,6}, {11,12,13,14,15,16}, {21,22,23,24,25,26} };
	int max_arr[3];
	int min_arr[3];
	int max_index[3][2];
	int min_index[3][2];


	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 5; j++)
		{
			if (i == 0 && j == 0) std::cout << "Массив:" << std::endl;
			if (j < 5) std::cout << twd_arr[i][j] << "\t";
			else std::cout << twd_arr[i][j] << std::endl;

			int pl_inc{0};
			int mn_inc{ 0 };

			for (int k = 0; k <= 5; k++)
			{
				if (twd_arr[i][j] >= twd_arr[i][k]) pl_inc++;
				if (twd_arr[i][j] <= twd_arr[i][k]) mn_inc++;
			}

			if (pl_inc == 6)
			{
				max_arr[i] = twd_arr[i][j];
				max_index[i][0] = i;
				max_index[i][1] = j;
			}
			if (mn_inc == 6)
			{
				min_arr[i] = twd_arr[i][j];
				min_index[i][0] = i;
				min_index[i][1] = j;
			}

		}
	}

	for (int i = 0; i <= 2; i++)
	{
		int pl_inc{ 0 };
		int mn_inc{ 0 };

		for (int j = 0; j <= 2; j++)
		{
			if (max_arr[i] >= max_arr[j]) pl_inc++;
			if (min_arr[i] <= min_arr[j]) mn_inc++;
		}
		if (mn_inc == 3) std::cout << "Индекс минимального элемента: (" << min_index[i][0]<<", "<< min_index[i][1]<<")" << std::endl;;
		if (pl_inc == 3) std::cout << "Индекс максимального элемента: (" << max_index[i][0] << ", " << max_index[i][1] << ")" << std::endl;
	}
}