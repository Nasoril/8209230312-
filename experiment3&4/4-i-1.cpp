#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int b[10] = {};
	int d = 0;
	cout << "Enter ten numbers:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for (int j = 0; j < 10; j++)
	{
		for (int k = 0; k < j; k++)
		{
			if (a[j] != a[k])
			{
				if (k == j - 1)
				{
					b[d] = a[j];
					d++;
				}
				else
					continue;
			}
			else
				break;
		}
	}
	cout << "The disrict numbers are:";
	cout << a[0] << " ";
	for (int i = 0; i < d; i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}