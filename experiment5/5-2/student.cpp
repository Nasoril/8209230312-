#include<iostream>
#include"student.h"
using namespace std;
void Student::display()
{
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void Student::set_value()
{
	cout << "enter num" << endl;
	cin >> num;
	cout << "enter name" << endl;
	cin >> name;
	cout << "enter sex" << endl;
	cin >> sex;
}