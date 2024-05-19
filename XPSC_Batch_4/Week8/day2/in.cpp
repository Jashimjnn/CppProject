// C++ program to illustrate some of the 
// above mentioned trigonometric functions 

#include <iostream> 
#include <math.h> 
using namespace std; 

int main() 
{ 
	double x = 2.3; 
	cout << "Sine value of x = 2.3: "
		<< sin(x) << endl; 
	cout << "Cosine value of x = 2.3: "
		<< cos(x) << endl; 
	cout << "Tangent value of x = 2.3: "
		<< tan(x) << endl; 

	x = 1.0; 
	cout << "Arc Cosine value of x = 1.0: "
		<< acos(x) << endl; 
	cout << "Arc Sine value of x = 1.0: "
		<< asin(x) << endl; 
	cout << "Arc Tangent value of x = 1.0: "
		<< atan(x) << endl; 

	x = 57.3; // in degrees 
	cout << "Hyperbolic Cosine of x=57.3: "
		<< cosh(x) << endl; 
	cout << "Hyperbolic tangent of x=57.3: "
		<< tanh(x) << endl; 

	return 0; 
} 
