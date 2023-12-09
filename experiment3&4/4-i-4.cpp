#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2)
{
	const int Max = 160;
	if (size1 > 80 && size2 > 80)
	{
		cout << "³¬¹ý·¶Î§" << endl;
	}
	int list3[Max];
	for (int i = 0; i < size1; i++)
	{
		list3[i] = list1[i];
	}
	for (int j = 0; j < size2; j++)
	{
		list3[size1 + j] = list2[j];
	}

	for (int k = 0; k < size1 + size2-1; k++)
	{
		for (int t = 0; t < size1 + size2 - k - 1; t++)
		{
			if (list3[t] > list3[t + 1])
			{
				int temp = list3[t];
				list3[t] = list3[t + 1];
				list3[t + 1] = temp;
			}

		}
	}
	cout << "The merged list is";
	for (int i = 0; i < size1 + size2; i++)
	{
		cout << list3[i] << " ";
	}
}
int main()
{
	int size1;
	int size2;
	int list1[10];
	int list2[10];
	cout << "Enter list1:";
	cin >> size1;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "Enter list2:";
	cin >> size2;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	merge(list1, size1, list2, size2);
	return 0;
}