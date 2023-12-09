#include<iostream>
using namespace std;
int main()
{
	bool gz[100];
	for (int i = 0; i < 100; i++)
	{
		gz[i] = false;
	}
	for (int i = 0; i < 100; i++)
	{
		for (int j = i; j < 100; j = j + i + 1)
		{
			if (gz[j]==true)
			{
				gz[j] = false;
			}
			else
			{
				gz[j] = true;
			}
		}
	}
	cout << "开着的柜子编号是：";
	for (int i = 0; i < 100; i++)
	{
		if (gz[i]==true)
		{
			cout << i + 1 << '\t';
		}
	}
	return 0;
}