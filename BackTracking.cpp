#include <bits/stdc++.h>
using namespace std;
void Printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void changeInArray(int arr[], int n, int i)
{
    if (i == n)
    {
        Printarray(arr, n);
        return;
    }

    arr[i] = i + 1;
    changeInArray(arr, n, i + 1);
    arr[i] -= 2;
}

int main()
{
    int arr[5] = {0};
    int n = 5;
    changeInArray(arr, n, 0);
    Printarray(arr, n);
}
