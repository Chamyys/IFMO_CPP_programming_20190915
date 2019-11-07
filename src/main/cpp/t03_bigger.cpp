//Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива//.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 5 2 4 3
//Sample Output:
//
//5 4

#include "t03_bigger.h"
#include <iostream>


using namespace std;

int t03_bigger() {
	int N, i;
	cin >> N;
	int mas[10000];
	for (i = 0; i < N; i++) {
		cin >> mas[i];
	}
	for (i = 1; i < N; i++) {
		if (mas[i] > mas[i - 1]) {
			cout << mas[i] << ' ';
		}
	}
	return (0);

}
