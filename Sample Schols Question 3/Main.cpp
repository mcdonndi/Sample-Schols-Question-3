#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	int numer, denom;
	char oper;
	Fraction ans;
	
	//Input first fraction
	cout << "Input numerator and denominator: ";
	cin >> numer >> denom;
	Fraction first(numer, denom);

	//Input operator
	cout << "Input desired operator: ";
	cin >> oper;

	//Input second fraction
	cout << "Input numerator and denominator: ";
	cin >> numer >> denom;
	Fraction second(numer, denom);

	if (oper == '+')
	{
		ans = first + second;
	}
	else if (oper == '-')
	{
		ans = first - second;
	}
	else if (oper == '*')
	{
		ans = first * second;
	}
	else if (oper == '/')
	{
		ans = first / second;
	}
	else
	{
		cout << "Invalid operator\n";
		return 0;
	}

	ans.simplified();
	ans.print();

	return 0;
}