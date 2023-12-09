#include"mytemperature.h"
double celsius_to_fah(double cel)
{
	double fah = 32.0 + (cel * 1.8);
	cout << cel << '\t' << fah << '\t';
	return 0;
}
double fahrenheit_to_cels(double fah)
{
	double cel = (fah - 32.0) / 1.8;
	cout << fah << '\t' <<setprecision(4)<< cel << '\t';
	return 0;
}
