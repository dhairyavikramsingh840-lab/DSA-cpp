#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter a number :";
  cin >> n;
  for (int i = 2; i <= n; i++)
  {
    int isprime = 1;
    int current = i;
    for (int j = 2; j * j <= i; j++)
    {
      if (current % j == 0)
      {
        isprime = 0;
      }
    }
    if (isprime)
    {
      cout << current << " ";
    }
  }
}