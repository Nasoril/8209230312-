#include<iostream>
using namespace std;
int main()
{
	double a, b;
	char op;
	double sum;
	cout << "ÊäÈëËãÊ½" << endl;
	cin >> a >> op >> b;
	switch (op)
	{
	case '+':
		sum = a + b;
		break;
	case '-':
		sum = a - b;
		break;
	case '*':
		sum = a * b;
		break;
	case '/':
		if (b != 0)
		{
			sum = a / b;
		}
		else { cout << "´íÎó" << endl; }
		break;

	default:
		cout << "ÔËËã·û³ö´í" << endl;
		break;
	}
	cout << sum << endl;
	return 0;
}