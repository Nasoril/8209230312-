#include<iostream>
using namespace std;
class cuboid
{
private:
	double length;
	double width;
	double height;
	double V;
public:
	void calculate()
	{
		V = length * width * height;
	}
	void enternum()
	{
		cout << "enter length" << endl;
		cin >> length;
		cout << "enter width" << endl;
		cin >> width;
		cout << "enter height" << endl;
		cin >> height;
		calculate();
	}
	
	double show()
	{
		return V;
	}
};
int main()
{
	cuboid c1;
	c1.enternum();
	cuboid c2;
	c2.enternum();
	cuboid c3;
	c3.enternum();
	cout << "c1:" << c1.show()<<endl;
	cout << "c2:" << c2.show() << endl;
	cout << "c3:" << c3.show() << endl;
	return 0;

}