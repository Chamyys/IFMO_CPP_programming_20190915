//Дано нечетное число n, не превосходящее 15.
//Создайте двумерный массив из n×n элементов, заполнив его символами "."
// (каждый элемент массива является строкой из одного символа).
// Затем заполните символами "*" среднюю строку массива,
// средний столбец массива, главную диагональ и побочную диагональ.
// В результате "*" в массиве должны образовывать изображение звездочки.
// Выведите полученный массив на экран, разделяя элементы массива пробелами.
//
//Sample Input:
//
//5
//Sample Output:
//
//* . * . *
//. * * * .
//* * * * *
//. * * * .
//* . * . *

#include "t02_star.h"
#include <iostream>


using namespace std;

int t02_star() {
	int n;
	cin >> n;
	char mas[15][15];
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			 mas[i][j] = '.';
		}
	}

	for (i = 0; i < n; i++) {
			mas[i][n/2] = '*';
	}
		for (j = 0; j < n; j++) {
			mas[n/2][j] = '*';
		}

		j = 0;
		for (i = 0; i < n; i++) {
			
				mas[i][j] = '*';
				j++;
		}

		j = 4;
		for (i = 0; i < n; i++) {

			mas[i][j] = '*';
			j--;
		}

		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				cout << mas[i][j] << ' ';
			}
		}


    return 0;
}
