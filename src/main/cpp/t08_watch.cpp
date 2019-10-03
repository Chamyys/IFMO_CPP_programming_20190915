//Электронные часы
//
//Электронные часы показывают время в формате h:mm:ss (от 0:00:00 до 23:59:59),
// то есть сначала записывается количество часов,
// потом обязательно двузначное количество минут,
// затем обязательно двузначное количество секунд.
// Количество минут и секунд при необходимости дополняются до двузначного числа нулями.
//
//С начала суток прошло N секунд. Выведите, что покажут часы.
//
//Формат входных данных
//
//        На вход дается натурально число N, не превосходящее 107 (10000000).
//
//Формат выходных данных
//
//        Выведите ответ на задачу.
//
//Sample Input 1:
//
//3602
//Sample Output 1:
//
//1:00:02
//Sample Input 2:
//
//129700
//Sample Output 2:
//
//12:01:40
#include "string"
#include "t08_watch.h"
#include <iostream>


using namespace std;

int main() {
	int N;
	int h;
	int m;
	int s;
	string ms = "";
	string ss = "";

	cin >> N;
	h = N / 3600;
	N = N - (h * 3600);
	m = N / 60;
	s = N % 60;
	while (h > 24) {
		h = h - 12;
	};
	if (m < 10) {
		ms = "0" + m);
	}
	else {
		ms = m;
	};
	if (s < 10) {
		ss = "0" + s);
	}
	else {
		ss = s;
	};
	cout << h << ":" << ss << ":" << ms << endl;
	return 0;
};