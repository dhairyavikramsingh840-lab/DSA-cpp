#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minimumIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minimumIndex])
            {
                minimumIndex = j;
            }
        }
        swap(arr[i], arr[minimumIndex]);
    }
}
void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {4, 6, 5, 2, 3, 1};
    selectionSort(arr, 6);
    PrintArray(arr, 6);
}