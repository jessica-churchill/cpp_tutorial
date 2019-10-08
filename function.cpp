// function example
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}

int main ()
{
  int x=0;
  int y=0;
  int z=0;
  
  cout << "This code will add two integers. " << endl;
  cout << "Enter value of x: " << endl;
  cin >> x;
  cout << "Enter value of y: " << endl;
  cin >> y;

  z = addition (x,y);
  cout << "The result is " << z << endl;

  return 0;
}