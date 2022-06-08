#include <iostream>
#include <math.h> 
#include <fstream>

using namespace std;

double cube(double x)
{
	double y = pow(x, 3.0);
	return y;
}

int main ()
{
	cout << "Hello! Please input your name: " << endl;
	string name;
	cin >> name;
	cout << "Welcome " << name << "!"<< endl;

	ofstream output_file;
    output_file.open("cube_results.dat");

	for (int i=0; i<5; i++)
	{		
	    double y = cube(i);
	    cout << i << "    " << y << endl;
	    output_file << i << "    " << y << endl;
	}
	output_file.close();
}