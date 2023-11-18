#include<iostream>
using namespace std;
int main()
{
	int a, b,c;
	cout << "请输入两个数：" << endl;
	cin >> a >> b;
	for (int i = a;; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			cout << "最大公约数为：" << i << endl;
			c = i;
			break;
		}
	}
	int d = (a * b) / c;
	cout << "最小公倍数为：" << d << endl;
	return 0;
}