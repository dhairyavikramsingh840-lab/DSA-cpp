#include <bits/stdc++.h>
using namespace std;
int main()
{
  int m, n;
  cout << "Enter row";
  cin >> m;
  cout << " Enter columns ";
  cin >> n;

  int **arr = new int *[m];

  for (int i = 0; i < m; i++)
  {
    arr[i] = new int[n];
  }

  int x = 1;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      arr[i][j] = x++;
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  
}
