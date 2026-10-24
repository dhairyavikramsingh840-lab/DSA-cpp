#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int s, int e, int key)
{
    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }

    else if (arr[mid] < key)
    {
        return BinarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return BinarySearch(arr, s, mid - 1, key);
    }
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    cout << BinarySearch(arr, 0, n - 1, 15);
}