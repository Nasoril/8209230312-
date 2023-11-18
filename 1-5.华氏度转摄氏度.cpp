#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float F;
	cout << "请输入华氏度：" << endl;
	cin >> F;
	float C = (F - 32) * 5 / 9;
	cout << "摄氏度为：" <<setprecision(2)<<C << endl;
	return 0;
}