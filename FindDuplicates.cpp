#include <iostream>
using namespace std;

int FindDuplicate(int arr[], int size)
{
  int ans = 0;
  for (int i = 0; i < size; i++)
  {
    ans = ans ^ arr[i];
  }

  for (int i = 0; i < size; i++)
  {
    ans = ans ^ i;
  }
  return ans;
}
int main()
{
  int arr[8] = {1, 2, 3, 4, 5, 6, 7, 1};

  cout << " The duplicate number in the given array is : " << FindDuplicate(arr, 8) << endl;

  return 0;
}