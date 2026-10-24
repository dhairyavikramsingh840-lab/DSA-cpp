#include <iostream>
using namespace std;

int PeakElement(int arr[], int size)
{
    int start = 0, end = size - 1, mid;

    while (start < end)
    {
        mid = (start + end) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return arr[start];
}
int main()
{
    int array[8] = {1, 2, 3, 4, 8, 3, 2, 1};

    cout << PeakElement(array, 8);
    return 0;
}