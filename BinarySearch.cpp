#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{

    int key;

    int even[6] = {23, 34, 45, 56, 67, 78};
    int odd[5] = {28, 34, 45, 67, 7};

    cout << BinarySearch(even, 6, 78) << endl;
    cout << BinarySearch(odd, 5, 34) << endl;

    return 0;
}
