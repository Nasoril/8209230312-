#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int str1 = strlen(s1);
	int str2 = strlen(s2);
	int t = 0;
	for (int i = 0; i < str2; i++)
	{
		t = 0;
		if (s1[0] == s2[i])
		{
			for (int j = 0; j < str1; j++)
			{
				if (s1[j] == s2[i + j] && i + j < str2)
				{
					t++;
				}
			}
			if (t == str1)
			{
				return i + 1;
			}
		}
	}
	return -1;
}
int main()
{
	char s1[180];
	char s2[180];
	cout << "Enter the first string:";
	cin >> s1;
	cout << "Enter the second string:";
	cin >> s2;
	cout << indexOf(s1, s2);

}