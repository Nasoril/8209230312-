#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void count(const char s[], int counts[])
{
	int str = strlen(s);
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (s[i] == j+'a' || s[i] == j + 'A')
			{
				counts[j]++;
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if(counts[i]!=0)
		cout << (char)(i + 'a') << ":" << counts[i] << "times" << endl; 
	}
}
int main()
{
	int counts[26];
	char s[180];
	cin.getline(s, 180);
	count(s, counts);
	return 0;
}