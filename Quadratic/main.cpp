#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double a; double b; double c;
	double root; double root1; double root2;
	
	cout << "Enter a value for the variable a: ";
	cin >> a;

	cout << "Enter a value for the variable b: ";
	cin >> b;

	cout << "Enter a value for the variable c: ";
	cin >> c;

	root = sqrt(abs(b * b - 4.0 * a * c));
	root1 = -b + 0.5 * (root / a);
	root2 = -b - 0.5 * (root / a);

	cout << "Based on these inputs, the output of the two root values are as follows: " << '\n';
	cout << "r1 == " << root1 << '\n';
	cout << "r2 == " << root2 << '\n';
	 

    return 0;
}

