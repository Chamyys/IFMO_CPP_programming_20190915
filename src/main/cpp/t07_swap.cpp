//Переставьте соседние элементы массива (A[0] c A[1], A[2] c A[3] и т.д.). Если элементов нечетное число, то последний элемент остается на своем месте.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 2 3 4 5
//Sample Output:
//
//2 1 4 3 5

#include "t07_swap.h"
#include <iostream>


using namespace std;

int t07_swap() {
	int N, i, j;
	cin >> N;
	int mas[10000];
	for (i = 0; i < N; i++) {
		cin >> mas[i];

	}


	for (i = 1; i < N; i++) {
		if (i % 2 == 1) {
			j = mas[i];
			mas[i] = mas[i - 1];
			mas[i - 1] = j
		}

	}

	for (i = 0; i < N; i++) {		
			cout << mas[i] << ' ';		
	}
	return (0);
}
