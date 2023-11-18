#include<iostream>
using namespace std;
int main()
{
	int x, y, z;
	cout << "请输入三边长" << endl;
	cin >> x >> y >> z;
	if (x + y > z && x + z > y && y + z > x)
	{
		cout << "周长为：" << x + y + z << endl;
		if (x == y || x == z || y == z)
		{
			cout << "是等腰三角形" << endl;
		}
		else
			cout << "不是等腰三角形" << endl;
	}
	else
		cout << "不是三角形" << endl;

	return 0;
}