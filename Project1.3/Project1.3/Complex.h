#pragma once
#include <iostream>
#include <string> 
#include <sstream>

using namespace std;

class Complex
{
private:
	double x, y;

public:
	Complex(double a = 0, double b = 0) { x = a; y = b; }

	double GetX() const { return x; }
	double GetY() const { return y; }
	void SetX(double value) { x = value; }
	void SetY(double value) { y = value; }

	void Init(double, double);
	void Display();
	Complex Read();
	string toString() const;

	Complex add(const Complex& c);
	Complex mul(const Complex& f);
	bool equ(const Complex& t);
};

