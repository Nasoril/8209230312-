#include"mytriangle.h"
int main()
{
	double side1, side2, side3;
	cout << "��������" << endl;
	cin >> side1>>side2>>side3;

	if (is_valid(side1, side2, side3) == true)
	{
		cout << "���Ϊ" << _area(side1, side2, side3) << endl;
	}
	else
	{
		cout << "����" << endl;
	}
	return 0;
}