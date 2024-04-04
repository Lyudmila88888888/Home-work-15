#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	const int rows = 10;
	const int cols = 10;
	int matrix[rows][cols]; // обьявление двумерного массива
	srand(time(NULL));
	int sum = 0;

	// Задача 1.

	std::cout << " \nИзначальный Массив:\n";

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = rand() % (100 + 1); // [0;100] диапазон массива
			std::cout << matrix[i][j] << ' ';

		}
		std::cout << "\n";
	}
	std::cout << "\n";

	std::cout << " Сумма каждого ряда:\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			sum += matrix[i][j];
			std::cout << matrix[i][j] << ' ';
		}
		std::cout << "\n\t";
		std::cout << sum << '\t';
	}
	

	// Задача 2.

	std::cout << " \nИзначальный Массив:\n";

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = rand() % (100 + 1); // [0;100] диапазон массива
			std::cout << matrix[i][j] << ' ';

		}
		std::cout << "\n";
	}
	std::cout << "\n";


	std::cout << " Введите число от 0 до 9:\n";
	std::cin >> n;


	if (n >= 0 && n < rows) {
		std::sort(matrix[n], matrix[n] + rows);



	}
	

	return 0;

}