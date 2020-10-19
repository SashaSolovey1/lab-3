// Lab_03_4.cpp
// < Соловей Олександр >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 19
#include <iostream>
using namespace std;
int main()
{
	double R;
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// розгалуження в повній формі
	if (((-2 * R)/(2 * R) * (x + 2 * R) <= y && y <= 0 || (R <= y && y <= 2 * R)))
	cout << "yes" << endl;
	else
	cout << "no" << endl;
	cin.get();
	return 0;
}