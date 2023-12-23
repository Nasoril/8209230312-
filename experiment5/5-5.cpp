#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int X=60, int Y=80)
	{
		x = X, y = Y;
	}
	void setPoint(int i, int j)
	{
		x =60+i; y =80+j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point A = Point();
	A.display();
	Point B = Point(20, 30);
	B.display();
	Point C;
	C.setPoint(10, 20);
	C.display();
	return 0;
}