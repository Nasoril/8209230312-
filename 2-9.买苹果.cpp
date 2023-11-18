#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int q = 2;
	int sum = q;
	int a;
	for (int i = 1;;i++)
	{
		if (q*2 < 100)
		{
			q = q * 2;
			a = i;
			sum = sum + q;
		}
		else
			break;
	}
	double b;
	b = (sum * 0.8) / a;
	cout << "苹果有：" <<q<< endl;
	cout << setprecision(4)<< "平均每天花费：" << b << endl;

	return 0;
}