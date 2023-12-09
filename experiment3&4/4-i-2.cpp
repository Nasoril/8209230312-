#include<iostream>
using namespace std;
void lister(double list[10])
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 10 - 1; j++)
			if (list[j] > list[j + 1])
			{
				double t = list[j];
				list[j] = list[j+1];
				list[j+1] = t;
				changed = true;
			}
	} while (changed);

}
int main()
{
	double list[10];
	cout << "输入十个数" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> list[i];
	}
	lister(list);
	for (int i = 0; i < 10; i++)
	{
		cout << list[i] << '\t';
	}
	return 0;
}