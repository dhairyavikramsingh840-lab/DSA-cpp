// For Descending order  ->

#include <iostream>
using namespace std;

void BubbleSorting(int *arr, int size)
{

    bool isswap = false;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isswap = true;
            }
        }
    }
    if (isswap == false)
    {
        cout << " The array is already sorted ..." << endl;
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
    int arr[5] = {1, 2, 3, 4, 5};

    BubbleSorting(arr, 5);
    PrintArray(arr, 5);
}
