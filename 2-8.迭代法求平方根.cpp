#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double a;
	cout << "ÇëÊäÈëa:" << endl;
	cin >> a;
	a = fabs(a);
	double b,c;
	b = a / 2;
	while (1)
	{
		c = (b + a / b) / 2;
		if (fabs(c-b)<10e-50)
			break;
		b = c;
	}
	cout<< c << endl;
	return 0;
}
