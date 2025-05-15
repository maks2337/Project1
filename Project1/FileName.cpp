//ПРАКТИЧЕСКАЯ РАБОТА № 1. Потоковый ввод/вывод в C++. Написать программу пересчета веса из фунтов в килограммы
#include<iostream>
using namespace std;

const float funt = 405.9;

int main() {
	setlocale(LC_ALL, "rus");
	float kg = 0, vfunt = 0;
	cout << "Пересчет веса из фунта в килограммы" << endl;
	cout << "Введите вес в фунтах ->";
	cin >> vfunt;
	kg = (vfunt * funt) / 1000;
	cout << vfunt << " фунт(а/ов) - это " << kg << " килограмм" << endl;
	system("pause");
	return 0;
	}