#include<iostream>
using namespace std;
class student
{
private:
	
public:
	int num;
	int scord;
	student(int n, int s)
	{
		num = n, scord = s;
	}
};
void max(student* p)
{
	int maxs = p[0].scord;
	int top = p[0].num;
	for (int i = 0; i < 5; i++)
	{

		if ((p[i].scord) > maxs)
		{
			maxs = p[i].scord;
			top = p[i].num;
		}
	};
	cout << "scord:" << maxs << endl;
	cout << "num:" << top << endl;
}
int main()
{
	student IF[5] = {
		student(1001,85),student(1002,87),student(1003,97),student(1004,78),student(1005,89)
	};
	max(IF);
	return 0;

}