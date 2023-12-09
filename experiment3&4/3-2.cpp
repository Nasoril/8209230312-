#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int num)
{
	if (num < 2)
	{
		return false;
	}
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int a=0;
	for (int i = 0; a<200;i++)
	{
		if (is_prime(i) == 1)
		{
			a++;
			cout << i << " ";
			if (a % 10 == 0)
			{
				cout << endl;
			}
			
		}
		
	}
	return 0;
}