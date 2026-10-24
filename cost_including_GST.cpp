#include <iostream>
using namespace std;
int main()
{
  float pen;
  float pencil;
  float eraser;
  float Totalcost;
  cout << "Enter the cost of pen : ";
  cin >> pen;

  cout << "Enter the cost of pencil : ";
  cin >> pencil;

  cout << "Enter the cost of eraser : ";
  cin >> eraser;

  Totalcost = pen + pencil + eraser;

  float includingGST = Totalcost * 0.18;

  cout << Totalcost + includingGST;

  return 0;
}