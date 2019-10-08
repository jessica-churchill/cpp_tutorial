#include <iostream>
#include <math.h> 
#include <fstream>

using namespace std;

int main ()
{
	ofstream output_file1;
    output_file1.open("pow_results.dat");

	for (int i=0; i<5; i++)
	{		
	    double y = pow(i,2.0);
	    cout << i << "    " << y << endl;
	    output_file1 << i << "    " << y << endl;
	}

	cout << "\n";

	ofstream output_file2;
    output_file2.open("sin_results.dat");

	for (int j=0; j<5; j++)
	{		
	    double x = 5*cos(j);
	    int z = 5*cos(j);
	    cout << j << "    " << x << "    " << z << endl;
	    output_file2 << j << "    " << x << "    " << z << endl;
	}

	output_file1.close();
	output_file2.close();
}