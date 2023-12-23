#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int sec;
public:
	void enterTime()
	{
		cout << "Please enter hour:" << endl;
		cin >> hour;
		cout << "Please enter minute:" << endl;
		cin >> minute;
		cout << "Please enter sec:" << endl;
		cin >> sec;
	}
	int Gethour()
	{
		return hour;
	}
	int Getminutue()
	{
		return minute;
	}
	int Getsec()
	{
		return sec;
	}
};
int main()
{
	Time t1;
	t1.enterTime();
	cout << t1.Gethour() << "  :  " << t1.Getminutue() << "  :  " << t1.Getsec() << endl;
	return 0;
	
}
