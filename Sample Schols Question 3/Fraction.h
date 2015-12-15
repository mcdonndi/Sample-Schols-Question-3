class Fraction
{
public:
	int numerator;
	int denominator;

	Fraction();
	Fraction(int numerator, int denominator);

	const Fraction operator+(const Fraction& f);
	const Fraction operator-(const Fraction& f);
	const Fraction operator*(const Fraction& f);
	const Fraction operator/(const Fraction& f);

	void simplified();
	void print();
};