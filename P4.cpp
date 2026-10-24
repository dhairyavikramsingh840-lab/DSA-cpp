#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the number of terms : ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    int num = 1;
    for (int j = 1; j <= i; j++)
    {
      cout << num;
      num += 1;
    }
    cout << endl;
  }
}