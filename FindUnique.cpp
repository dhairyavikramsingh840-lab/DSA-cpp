#include <iostream>
using namespace std;

int FindUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[9] = {1, 3, 5, 7, 3, 1, 7, 5, 9};

    cout << FindUnique(arr, 9);
}