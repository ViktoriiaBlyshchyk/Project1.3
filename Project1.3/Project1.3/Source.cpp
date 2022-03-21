#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	Complex a, b;
	cout << "First:\n";
	a = a.Read();
	cout << "Second:\n";
	b = b.Read();
	Complex c = a.add(b); 
	cout << "Add = ";
	c.Display();
	
	Complex n, m;
	cout << "First:\n";
	n = n.Read();
	cout << "Second:\n";
	m = m.Read();
	Complex x = n.mul(m);
	cout << "Mul = ";
	x.Display();

	Complex k, l;
	cout << "First:\n";
	k = k.Read();
	cout << "Second:\n";
	l = l.Read();
	cout << "Equ: ";
	if (k.equ(l))
		cout << "True\n";
	else
		cout << "False\n";

	return 0;
}
