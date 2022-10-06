// laba_2.cpp
//	Довгошиї Анастасії
//	Лабораторна робота №2.
//	Лінійні програми
//	Варіант 6.

#include <iostream>
#include <cmath> 	//підключення бібліотеки задля мат. операцій 
using namespace std;
int main()
{
	double x, z1, z2; 	//змінні з плавуючою точкою.
	cout << "х = "; cin >> x; 	//введення х

	z1 = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
	z2 = (4 * (cos(x / 2))) * cos(5 * x / 2) * cos(4 * x);
	cout << endl;

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
