// Lab_03_3.cpp
// < ������� ��������� >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 19
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= -1)
		y = 2 * R + ((2 * R) / (1 + 2 * R)) * (x - 2 * R);
	else
		if (-1 <= x && x <= 1)
			y = 0;
		else
			if (1 <= x && x <= 1 + R)
				y = sqrt(R * R - pow(x - 1 - R, 2));
			else
				if (1 + R < x && x <= 1 + 2 * R)
					y = sqrt(R * R - pow(x - 1 - R, 2));
				else
					y = (-1 / (7 - 1 - 2 * R) * (x - 1 - 2 * R));
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}