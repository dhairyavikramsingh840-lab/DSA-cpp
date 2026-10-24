#include <iostream>
using namespace std;

int summation(int arr[], int n)
{

    int sum = 0;

    for (int i = 0; i < n; i++)
    {

        sum = sum + arr[i];
    }

    return sum;
}
int main()
{
    int size;
    cout << "Enter the size of an  array : ";
    cin >> size;

    int arr[100];
    cout << "Enter the elements of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The sum of all elements of this array is  : " << summation(arr, size);
}