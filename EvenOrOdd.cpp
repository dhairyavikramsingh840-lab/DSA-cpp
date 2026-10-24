#include <iostream>
using namespace std;
int number(int x)
{
  if (x % 2 == 0)
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
  int ans = number(9);

  if (ans)
  {
    cout << "The number is even " << endl;
  }
  else
  {
    cout << "The number is odd" << endl;
  }
}
