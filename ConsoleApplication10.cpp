#include <iostream>
using namespace std;
//Написать программу, 
//которая вводит по строкам с клавиатуры двумерный
//массив дробного типа(3 * 5 - три строки на пять элементов)
//и вычисляет среднее арифметическое элементов строк.
int main()
{
    setlocale(LC_ALL, "Russian");
    double massiv[3][5];
	cout << "Введите размер двумерного массива: " << endl;
    for (int i = 0; i < 3; i++){
		for (int j = 0; j < 5; j++) {
			cin >> massiv[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << massiv[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++) {
		double sum = 0;
		for (int j = 0; j < 5; j++) {
			sum += massiv[i][j];
		}
		double a = sum / 5;
		cout << "Среднее арифметическое: " << i + 1 << "-й строки: " << a << endl;
	}

	return 0;
}