#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int si, int ei, int target)
{
    if (si > ei)
    {
        return -1;
    }

    int mid = si + (ei - si) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    else
    {

        if (arr[si] < arr[mid])
        {
            if (arr[si] <= target && target <= arr[mid])
            {
                return search(arr, si, mid - 1, target);
            }
            else
            {
                return search(arr, mid + 1, ei, target);
            }
        }
        if (arr[mid] <= target && target <= arr[ei])
        {
            return search(arr, mid + 1, ei, target);
        }
        else
        {
            return search(arr, si, mid - 1, target);
        }
    }
}
int main()
{
    int arr[9] = {6, 7, 8, 9, 0, 1, 2, 3, 4};
    int n = 9;

    cout << search(arr, 0, n - 1, 6);
}