#include <iostream>
using namespace std;

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void AlternateSwap(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int even[8] = {2, 1, 4, 3, 6, 5, 8, 7};
    int odd[5] = {2, 1, 4, 3, 5};

    AlternateSwap(even, 8);
    AlternateSwap(odd, 5);

    PrintArray(even, 8);
    PrintArray(odd, 5);
    return 0;
}