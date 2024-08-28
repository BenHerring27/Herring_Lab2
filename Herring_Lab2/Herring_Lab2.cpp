#include <iostream>
using namespace std;
int main()
{
	cout << "Hello, my name is Ben and I'm going to solve the equation: " << endl << "Ax + B = 0" << endl << "For x" << endl;
	float A;
	float B;
	float X;
	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "Please enter a value for B: ";
	cin >> B;
	X = ( -(B) / A);
	cout << "Solving " << A << "x + " << B << " = 0 for x..." << endl;
	cout << "The answer is: " << endl;
	cout << "x = " << X;
}
