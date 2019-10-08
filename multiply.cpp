// stringstreams
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
  int a=0;
  int b=0;
  int c=0;
  
  cout << "This code will multiply two integers. " << endl;
  cout << "Enter value of a: " << endl;
  cin >> a;
  cout << "Enter value of b: " << endl;
  cin >> b;
  c=a*b ;
  cout << "Result: " << c << endl;

  if (c > 0)
  cout << "Result is positive" << endl;
  else if (c < 0)
  cout << "Result is negative" << endl;
  else
  cout << "Result is 0" << endl;

  return 0;
}