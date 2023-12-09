#include"mytriangle.h"
int main()
{
	double side1, side2, side3;
	cout << "输入三边" << endl;
	cin >> side1>>side2>>side3;

	if (is_valid(side1, side2, side3) == true)
	{
		cout << "面积为" << _area(side1, side2, side3) << endl;
	}
	else
	{
		cout << "错误" << endl;
	}
	return 0;
}