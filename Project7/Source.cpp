// Lab_03_4.cpp
// < ������� ��������� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 19
#include <iostream>
using namespace std;
int main()
{
	double R;
	double x; // ������� ��������
	double y; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;
	// ������������ � ����� ����
	if (((-2 * R)/(2 * R) * (x + 2 * R) <= y && y <= 0 || (R <= y && y <= 2 * R)))
	cout << "yes" << endl;
	else
	cout << "no" << endl;
	cin.get();
	return 0;
}