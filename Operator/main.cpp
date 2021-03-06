#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

/* 
Order of precedence:
1) * Multiplication
2) / Division
3) % Modulus (remainder of dividing right operand into left operand)
4) + Addition
5) - Subtraction)
*/


int main()
{
	int i0; int i1; double d0; double d1;
	cin >> i0 >> i1 >> d0 >> d1;

	
	cout << '\n' << "i0 * i1 == " << left << i0 * i1 << '\n';
	cout << "i0 * d0 == " << left << i0 * d0 << '\n';
	cout << "d0 * d1 == " << left << d0 * d1 << '\n';

	cout << '\n' << "i0 / i1 == " << left << i0 / i1 << '\n';
	cout << "i0 / d0 == " << left << i0 / d0 << '\n';
	cout << "d0 / d1 == " << left << d0 / d1 << '\n';

	cout << '\n' << "i0 % i1 == " << left << i0 % i1 << '\n';

	cout << '\n' << "i0 + i1 == " << left << i0 + i1 << '\n';
	cout << "i0 + d0 == " << left << i0 + d0 << '\n';
	cout << "d0 + d1 == " << left << d0 + d1 << '\n';

	cout << '\n' << "i0 - i1 == " << left << i0 - i1 << '\n';
	cout << "i0 - d0 == " << left << i0 - d0 << '\n';
	cout << "d0 - d1 == " << left << d0 - d1 << '\n';

	return 0;
}