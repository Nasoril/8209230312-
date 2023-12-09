#include"mytemperature.h"
using namespace std;
int main()
{
	cout << "Celsius" << '\t' << "Fahrenheit" << '\t' << "|" << '\t' << "Fahrenheit" << '\t' << "Celsius" << '\t' << endl;
	celsius_to_fah(40.0); 
	cout << '\t' << "|"<<'\t';
	fahrenheit_to_cels(120.0);
	cout << endl;
	celsius_to_fah(39.0);
	cout << '\t' << "|" << '\t';
	fahrenheit_to_cels(110.0);
	cout << endl;
	celsius_to_fah(31.0);
	cout << '\t' << "|" << '\t';
	fahrenheit_to_cels(30.0);
	cout << endl;
	return 0;
}