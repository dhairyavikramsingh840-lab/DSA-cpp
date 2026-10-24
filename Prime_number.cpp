#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << " enter any number : " << endl;
  cin >> n;

  bool isprime;
  if (n <= 1)
  {
    isprime = 0;
  }
  else
  {
    for (int i = 2; i * i <= n; i++)
    {
      if (n % i == 0)
      {
        isprime = 0;
        break;
      }
      else
      {
        isprime = 1;
      }
    }
  }
  if (isprime)
  {
    cout << n << " is a prime number . " << endl; 
  }
  else
  {
    cout << n << " is not a prime number ." << endl;
  }
  return 0;
}