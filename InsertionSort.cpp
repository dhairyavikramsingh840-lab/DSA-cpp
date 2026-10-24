#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int previous = i - 1;

        while (previous >= 0 && arr[previous] > current)
        {
            arr[previous + 1] = arr[previous]; 
            previous--;
        }
        arr[previous + 1] = current;
    }
}

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[7] = {6, 4, 7, 3, 1, 2, 5};

    InsertionSort(arr, 7);
    PrintArray(arr, 7);

    return 0;
}
