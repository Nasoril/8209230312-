#include<iostream>
using namespace std;
void together(int& m, int& n)
{
	int t;
	for (int i = m;; i--)
	{
		if (m % i == 0 && n % i == 0)
		{
			cout << "���Լ��Ϊ" << i << endl;
			t = i;
			break;
		}
	}
	int a = (m * n) / t;
	cout << "��С������Ϊ" << a << endl;
};
int main()
{
	int a, b;
	cout << "������������" << endl;
	cin >> a >> b;
	together(a, b);
	return 0;
}