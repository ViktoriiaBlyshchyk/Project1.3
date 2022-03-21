#include "Complex.h"

void Complex::Init(double x, double y)
{
	SetX(x);
	SetY(y);
}

Complex Complex::Read()
{
	double x, y;
	cout << "Real: ";
	cin >> x;
	cout << "Image: ";
	cin >> y;

	Init(x, y);

	Complex z = Complex(x, y);
	return z;
}

void Complex::Display()
{
	cout << toString() << endl;
}

string Complex::toString() const
{
	stringstream sout;
	if (y >= 0)
		sout << x << "+" << y << "i\n";
	else
		sout << x << y << "i\n";
	return sout.str(); 
}


Complex Complex::add(const Complex& c)
{
	Complex d;
	d.x = x + c.x;
	d.y = y + c.y;
	return d;
}

Complex Complex::mul(const Complex& f)
{
	Complex t;
	t.x = x * f.x - y * f.y;
	t.y = x * f.y + y * f.x;
	return t;
}

bool Complex::equ(const Complex& t)
{
	if ((x == t.x) && (y == t.y))
		return true;
	else
		return false;
}