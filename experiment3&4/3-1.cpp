#include<iostream>
using namespace std;
void together(int& m, int& n)
{
	int t;
	for (int i = m;; i--)
	{
		if (m % i == 0 && n % i == 0)
		{
			cout << "最大公约数为" << i << endl;
			t = i;
			break;
		}
	}
	int a = (m * n) / t;
	cout << "最小公倍数为" << a << endl;
};
int main()
{
	int a, b;
	cout << "请输入两个数" << endl;
	cin >> a >> b;
	together(a, b);
	return 0;
}