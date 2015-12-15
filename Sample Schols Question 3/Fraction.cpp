#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction()
{
	numerator = 0;
	denominator = 0;
}

Fraction::Fraction(int numerator, int denominator)
{
	Fraction::numerator = numerator;
	Fraction::denominator = denominator;
}

const Fraction Fraction::operator+(const Fraction& f)
{
	Fraction ans;
	ans.numerator = numerator*f.denominator + f.numerator*denominator;
	ans.denominator = denominator * f.denominator;
	return ans;
}

const Fraction Fraction::operator-(const Fraction& f)
{
	Fraction ans;
	ans.numerator = numerator*f.denominator - f.numerator*denominator;
	ans.denominator = denominator * f.denominator;
	return ans;
}

const Fraction Fraction::operator*(const Fraction& f)
{
	Fraction ans;
	ans.numerator = numerator * f.numerator;
	ans.denominator = denominator * f.denominator;
	return ans;
}

const Fraction Fraction::operator/(const Fraction& f)
{
	Fraction ans;
	ans.numerator = numerator / f.numerator;
	ans.denominator = denominator / f.denominator;
	return ans;
}

void Fraction::simplified()
{
	int gcd;
	for (int i = 1; i <= numerator && i <= denominator; i++)
	{
		if (numerator%i == 0 && denominator%i == 0)
		{
			gcd = i;
		}
	}
	numerator = numerator / gcd;
	denominator = denominator / gcd;
}

void Fraction::print()
{
	cout << numerator << "/" << denominator << endl;
}