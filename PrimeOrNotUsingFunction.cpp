#include <iostream>
using namespace std;
int PrimeOrNot(int n)
{

  bool isprime = 1;
  if (n == 0 || n == 1)
  {
    return 0;
  }
  else
  {
    for (int i = 2; i * i <= n; i++)
    {

      if (n % i == 0)
      {

        return 0;
        break;
      }
    }
    return 1;
  }
  if (isprime)
  {
    return 1;
  }
  else
  {
    return 0;
  }

}
int main()
{
  int check = PrimeOrNot(1);

  if (check)
  {
    cout << " The given number is a prime number ..";
  }
  else
  {
    cout << "The number is not a prime number ..";
  }
}
