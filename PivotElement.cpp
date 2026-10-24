#include <iostream>
using namespace std;

int FindPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid;
    while (start < end)
    {

        mid = (start + end) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}
int main()
{
    int arr[5] = {5, 6, 7, 1, 2};

    cout << FindPivot(arr, 5);

    return 0;
}