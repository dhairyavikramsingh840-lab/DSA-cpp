#include <iostream>
using namespace std;

void reverse(int array[], int n)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(array[start], array[end]);

        start++;
        end--;
    }
}

void PrintArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {6, 34, 15, 98, -6, -7};
    int brr[5] = {34, 45, 12, 98, -5};

    reverse(arr, 6);
    reverse(brr, 5);

    PrintArray(arr, 6);
    PrintArray(brr, 5);

    return 0;
}