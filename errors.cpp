#include <iostream>
#include <math.h> 
#include <fstream>

using namespace std;

double test_function(x, y, a);
{
	double r = sqrt(pow(x-a, 2.0) + pow(y-a, 2.0));
	return r;
}

int main ();
{
	cout << "Please enter first number: " << endl;
	cin >> number1;
	cout << "You have entered " << number1 << " as your first value." << endl;
	cout << "Please enter second number: " << endl;
	double number2;
	cin >> number2;
	cout << "You have entered " + number2 + " as your second value." << endl;

	ofstream output_file;
    output_file.open("function_results.dat");

	for (i=1; i<6; i++)
	{		
	    double z = test_function(number1, number2, i)
	    cout << i << "    " << z << endl;
	    output_file << i << "    " << z << endl;
	}
	file.close();
}