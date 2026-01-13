#include <iostream>
#include <windows.h>
#include <filesystem> 
#include <fstream>
#include <array>
#include <string>
#include <cstdlib>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//количество строк и столбцов
	int rows{ 0 }, columns{ 0 };

	//количество живых клеток
	int alife_quantity{ 0 };

	//координаты живых клеток
	int row{ 0 }, column{};

	//индикатор продолжения игры
	char yesNo_first{}, yesNo_second{};

	//счетчик
	int inc{ 0 };

	//количество эволюций
	int generation{ 1 };

	//количество живых соседов
	int inc_alife{};

	//счетчик сравнения матриц
	int compare{};

	//проверяем не является ли файл пустой
	std::filesystem::path filePath = "matrix.txt";
	bool isEmpty = std::filesystem::is_empty(filePath);

	if (!isEmpty)
	{
		std::cout << "Есть текущие параметры. Внесем изменения? (y/n): ";
		std::cin >> yesNo_first;
	}

	//если файл пустой, предлагаем заполнить 
	if (isEmpty || yesNo_first == 'y')
	{
		std::cout << "Введите количество строк (не менее 5): ";
		std::cin >> rows;
		std::cout << "Введите количество столбцов (не менее 5): ";
		std::cin >> columns;

		std::ofstream fout("matrix.txt");
		fout << rows << " " << columns << std::endl;

		do {
			std::cout << "Введите количество живых клетов: ";
			std::cin >> alife_quantity;
			if (rows * columns < alife_quantity) std::cout << "Количество живых клеток превышает параметры матрицы!\n\n";
		} while (rows * columns < alife_quantity);

		do {
			std::cout << "Введите координаты живой клетки через пробел [x y]: ";
			std::cin >> row >> column;
			if (row >= rows || column >= columns) {
				std::cout << "Точка не принадлежит матрице!\n";
				if (row >= rows) std::cout << "Координата \"х\" больше количества строк: " << rows << "\n";
				if (column >= columns) std::cout << "Координата \"y\" больше количества столбцов: " << columns << "\n";
			}
			else
			{
				fout << row << " " << column << std::endl;
				inc++;
			}
		} while (inc < alife_quantity);

		fout.close();
		std::cout << "Параметры матрицы записаны в файл!\n";
	}

	std::cout << "\nВывести на экран первичную матрицу? (y/n): ";

	std::cin >> yesNo_second;

	if (yesNo_second == 'y')
	{
		system("cls");
		std::ifstream fin("matrix.txt");
		fin >> rows;
		fin >> columns;
		int i{};

		//матрица жизни
		int** life_matrix{ new int* [rows] {} };

		for (int i{}; i < rows; i++)
		{
			life_matrix[i] = new int[columns] {};
		}

		//новая матрица жизни
		int** new_life_matrix{ new int* [rows] {} };

		for (int i{}; i < rows; i++)
		{
			new_life_matrix[i] = new int[columns] {};
		}
		do
		{
			fin >> row;
			fin >> column;
			life_matrix[row][column] = 1;
			i++;
		} while (!fin.eof());

		fin.close();

		for (int i{}; i < rows; i++)
		{
			for (int j{}; j < columns; j++)
			{
				if (life_matrix[i][j] != 1) life_matrix[i][j] = 0;
				if (life_matrix[i][j] == 1)
				{
					std::cout << "*" << " ";
					inc_alife++;
				}
				else std::cout << "-" << " ";
			}
			std::cout << std::endl;
		}
		std::cout << "Generation: " << generation << ". " << "Alive cells: " << inc_alife << std::endl;

		yesNo_first = 'n';
		std::cout << "\nЗапускаем процесс? (y/n): ";
		std::cin >> yesNo_first;

		if (yesNo_first == 'y')
		{
			yesNo_second = 'n';
			std::cout << "\nПредыдущие матрицы удаляем с экрана? (y/n): ";
			std::cin >> yesNo_second;

			do
			{
				Sleep(1000);
				if (yesNo_second == 'y') system("cls");
				generation++;
				//поиск
				for (int i{}; i < rows; i++)
				{
					for (int j{}; j < columns; j++)
					{
						inc_alife = 0;
						for (int i_n{ i - 1 }; i_n <= i + 1;i_n++)
							for (int j_n{ j - 1 }; j_n <= j + 1; j_n++)
								if (i_n != i || j_n != j)
									if (i_n >= 0 && i_n < rows && j_n >= 0 && j_n < columns)
										if (life_matrix[i_n][j_n] == 1) inc_alife++;

						if (life_matrix[i][j] == 1)
							if (inc_alife > 1 && inc_alife < 4) new_life_matrix[i][j] = 1; else new_life_matrix[i][j] = 0;
						else
							if (inc_alife == 3) new_life_matrix[i][j] = 1; else new_life_matrix[i][j] = 0;
					}
				};

				std::cout << std::endl;

				compare = 0;

				for (int i{}; i < rows; i++)
					for (int j{}; j < columns; j++)
						if (life_matrix[i][j] == new_life_matrix[i][j]) compare++;

				inc_alife = 0;

				for (int i{}; i < rows; i++)
				{
					for (int j{}; j < columns; j++)
					{
						if (new_life_matrix[i][j] == 1)
						{
							std::cout << "* ";
							inc_alife++;
						}
						else std::cout << "- ";
						life_matrix[i][j] = new_life_matrix[i][j];
						new_life_matrix[i][j] = 0;
					}
					std::cout << std::endl;
				}
				if (compare != rows * columns && inc_alife > 0)
					std::cout << "Generation: " << generation << ". " << "Alive cells: " << inc_alife << std::endl;
				else if (compare == rows * columns)
				{
					std::cout << "Generation: " << generation << ". " << "Alive cells: " << inc_alife << std::endl;
					std::cout << "The World is stagnated. Game over.\n";
				}
				else if (inc_alife == 0)
				{
					std::cout << "Generation: " << generation << ". " << "Alive cells: " << inc_alife << std::endl;
					std::cout << "All cells are dead. Game over.\n";
				}

			} while (compare != rows * columns && inc_alife > 0);

			for (int i = 0; i < rows; i++)
			{
				delete[] life_matrix[i];
				delete[] new_life_matrix[i];
			};
			delete[] life_matrix;
			delete[] new_life_matrix;
	}
		else
		{
			for (int i = 0; i < rows; i++)
			{
				delete[] life_matrix[i];
				delete[] new_life_matrix[i];
			};
			delete[] life_matrix;
			delete[] new_life_matrix;

			std::exit;
		}
	} 
	else std::exit;

	return EXIT_SUCCESS;

}
