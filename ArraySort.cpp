#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {1, 2, 9, 8, 7, 5, 4, 3, 2, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n); // STL sort function

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
