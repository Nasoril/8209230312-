#include<iostream>
using namespace std;
int main()
{
	const double pi = 3.14;
	double r, h;
	cout << "请输入底面半径" << endl;
	cin >> r;
	cout << "请输入锥高" << endl;
	cin >> h;
	double S = pi * r * r;
	double V = (S * h)/3;
	cout << "圆锥体积为：" <<V  << endl;
	return 0;

}