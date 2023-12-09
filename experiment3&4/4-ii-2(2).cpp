#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString)
{

	int sum=0;
	int i = 0;
	int str = strlen(hexString);
		for (int j = str-1;j>=0;j--)
		{
			if (hexString[j] >= 'A' && hexString[j] <= 'F')
			{
				sum = sum + ((int)hexString[j] - 55) * pow(16, i);
			}
			if (hexString[j] >= '0' && (int)hexString[j] <= '9')
			{
				sum = sum + ((int)hexString[j] - 48) * pow(16, i);
			}
			i++;
		}
	return sum;
}
int main()
{
	char hexString[180];
	cin >> hexString;
	cout << parseHex(hexString);
	return 0;
}