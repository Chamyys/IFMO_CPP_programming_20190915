//Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., последний элемент переходит на место A[0]).
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
//5 1 2 3 4

#include "t08_cycleswap.h"
#include <iostream>


using namespace std;

int t08_cycleswap() {
	int N, i, j;
	cin >> N;
	int mas[10000];


	for (i = 0; i < N; i++) {
		cin >> mas[i];
	}

	j = mas[N];
	for (i = N-1; i >= 0 ; i--) {
		mas[i + 1] = mas[i];

	}
	mas[0] = j;
	for (i = 0; i < N; i++) {
		cout << mas[i];
	}

	return (0);

}