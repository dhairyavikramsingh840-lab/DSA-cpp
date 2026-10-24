#include <iostream>
#include <climits>
using namespace std;

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}

void CountSort(int arr[], int n)
{

    int freq[100000] = {0};
    int minval = INT_MAX, maxval = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        minval = min(minval, arr[i]);
        maxval = max(maxval, arr[i]);
    }

    for (int i = minval, j = 0; i <= maxval; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
}

int main()
{
    int arr[7] = {4, 5, 7, 4, 3, 1, 6};
    CountSort(arr, 6);
    PrintArray(arr, 6);
}