#include<iostream>
#include<cstring>
using namespace std;
void swap(int s[], int n)
{
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (s[j] > s[j + 1])
			{
				int temp=s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int n;
	cout << "输入动态数组的元素个数" << endl;
	cin >> n;
	int* p = new int[n];
	cout << "输入动态数组的元素" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> *(p+i);
	}
	swap(p, n);
	for (int i = 0; i < n; i++)
	{
		cout << *(p + i) << " ";
	}
	delete[]p;
	return 0;
}