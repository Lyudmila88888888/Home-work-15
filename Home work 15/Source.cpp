#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
	setlocale(LC_ALL, "Russian");
	// Задача 1. В одномерном массиве размером в 10 элементов найдите среднее арифметическое.Также посчитайте
// кол - во элементов, значение которых меньше найденного среднего арифметического.

const int size = 10;
int arr[size]{ 15, 7, 10, 42, 40, 15, 17, 38, 8, 23 };

std::cout << "Массив:\n";
for (int i = 0; i < size; i++)
	std::cout << arr[i] << ' ';
std::cout << '\n';

int sum = 0;

for (int i = 0; i < size; i++)
	sum += arr[i];

std::cout << "  Cреднее арифметическое элементов массива = " << (double)sum / size << '\n';

int counter = 0;
for (int i = 0; i < size; i++) {
	if (arr[i] < (double)sum / size) {
		counter++;
	}
}

std::cout << "  Количество элементов массива со значением < среднего арифмитического " << counter << '\n';



// Задача 2. Даны два двумерных массива размерами 5 на 5 элементов.
// Требуется сложить их между собой. Выведите в консоль результаты 
// попарного сложения элементов обоих массивов, которые располагаются 
// в одинаковых координатах.

const int size = 5;

int arr1[size][size]{
	{ 5, 12, 17, 56, 23},
	{ 7, 18, 14, 28, 36},
	{ 9, 28, 47, 32, 16},
	{ 3, 89, 42, 76, 18},
	{ 1, 18, 46, 54, 27},
};
std::cout << " Массив 1: \n";
for (int i = 0; i < size; i++) {
	for (int j = 0; j < size; j++) {
		std::cout << arr1[i][j] << ' ';
	}
	std::cout << '\n';
}
std::cout << '\n';

int arr2[size][size]{
	{ 12, 17, 56, 23, 89 },
	{ 18, 14, 28, 36, 75 },
	{ 28, 47, 32, 16, 58 },
	{ 89, 42, 76, 18, 12 },
	{ 18, 46, 54, 27, 14 },
};

std::cout << " Массив 2: \n";
for (int i = 0; i < size; i++) {
	for (int j = 0; j < size; j++) {
		std::cout << arr2[i][j] << ' ';
	}
	std::cout << '\n';
}
std::cout << '\n';


std::cout << "  Результат попарного сложения элементов массивов: \n";
for (int i = 0; i < size; i++) {
	for (int j = 0; j < size; j++) {
		std::cout << arr1[i][j] + arr2[i][j] << ' ';
	}
	std::cout << '\n';

}


// Задача 3. Пользователь вводит шестизначное число. Если число введено неверно, 
// программа завершает свою работу.Иначе, программа в цикле помещает все его
// цифры в одномерный массив размером в 6 элементов и выводит его на экран.

int n;

std::cout << " Введите шестизначное число -> \n";
std::cin >> n;

if (n < 100000 || n > 999999) {
	std::cout << " Введённое число не соответствует формату запрошенного числа. \n";
	return 0;
}

int mass[6];

for (int i = 5; i >= 0; i--) {
	mass[i] = n % 10;
	n /= 10;
}

std::cout << '\n';

std::cout << " Массив : \n";
for (int i = 0; i < 6; i++) {
	std::cout << mass[i] << ' ';
}




// ДАЛЬШЕ ДЗ 15 КОТОРОЕ Я ПЕРЕПУТАЛА С 16. НЕ ПРОВЕРЯЙТЕ ЕГО ПОЖАЛУЙСТА, ТАМ МНЕ НАДО ЕЩЕ ПОДУМАТЬ, ВСЕ РАВНО ПРОСРОЧИЛА ЕГО.

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
