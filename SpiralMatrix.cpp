#include <iostream>
using namespace std;

void SpiralMatrix(int Mat[][4], int n, int m)
{
  int srow = 0, scol = 0;
  int erow = n - 1, ecol = m - 1;

  while (srow <= erow && scol <= ecol)
  {
    // Top
    for (int j = scol; j <= ecol; j++)
    {
      cout << Mat[srow][j] << " ";
    }
    // right
    for (int i = srow + 1; i <= erow; i++)
    {
      cout << Mat[i][ecol] << " ";
    }
    // bottom
    for (int j = ecol - 1; j >= scol; j--)
    {
      if (erow == srow)
      {
        break;
      }
      cout << Mat[erow][j] << " ";
    }
    // left

    for (int i = erow - 1; i >= srow + 1; i--)
    {
      if (ecol == scol)
      {
        break;
      }
      cout << Mat[i][scol] << " ";
    }

    cout << endl;

    srow++;
    scol++;
    erow--;
    ecol--;
  }
}

int main()
{
  int Matrix[4][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12},
                      {13, 14, 15, 16}};

  int Matrix2[3][4] = {{1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9, 10, 11, 12}};

  SpiralMatrix(Matrix, 4, 4);
  SpiralMatrix(Matrix2, 3, 4);
}