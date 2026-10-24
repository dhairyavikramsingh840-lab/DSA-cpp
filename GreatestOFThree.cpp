#include <iostream>
using namespace std;
int main()
{
  int a;
  cout << "Enter the value of a : ";
  cin >> a;
  int b;
  cout << "Enter the value of b : ";
  cin >> b;

  int c;
  cout << "Enter the value of c : ";
  cin >> c;

  if (a >= b && a >= c)
  {
    cout << "greater is " << a << endl;
  }

  else if (b >= a && b >= c)
  {
    cout << "greater is " << b << endl;
  }
  else
  {
    cout << "greater is " << c << endl;
  }
} 