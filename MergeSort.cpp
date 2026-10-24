#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int si, int ei, int mid)
{

    int i = si;
    int j = mid+1;

    vector<int> temp;

    while (i <= mid && j <= ei)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= ei)
    {
        temp.push_back(arr[j++]);
    }
    // COPYING TEMPORARY TO ORIGINAL ->

    for (int i = si,x = 0; i <= ei; i++)
    {
      
        arr[i] = temp[x++];
    }

}



void mergeSort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = si + (ei - si) / 2;

    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);

    Merge(arr, si, ei, mid);
}


void Printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {6, 3, 7, 5, 4, 2};
    int n = 6;
    mergeSort(arr, 0, n - 1);

    Printarray(arr, n);
}
