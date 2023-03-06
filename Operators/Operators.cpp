#include<iostream>
using namespace std;

//#define ASSIGNMENT_OPERATOR
//#define INCREMENT_DECREMENT
//#define COMPOUND_ASSIGNMENTS
//#define COMPARISON_OPERATORS
//#define LOGICAL_OPERATORS
void main()
{
	setlocale(LC_ALL, "");

#ifdef ASSIGNMENT_OPERATOR
	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c;

#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	int i = 0;
	++i;
	i++;
	--i;
	i--;
	int j = i++;
	cout << i << endl;
	cout << j << endl;
#endif // INCREMENT_DECREMENT
#ifdef COMPOUND_ASSIGNMENTS
	int a = 2;
	int b = 3;
	a = a + b;
	cout << a << endl;
#endif // COMPOUND_ASSIGNMENTS
#ifdef COMPARISON_OPERATORS

#endif // COMPARISON_OPERATORS
#ifdef LOGICAL_OPERATORS
	cout << (!true == false) << endl;
#endif // LOGICAL_OPERATORS

}