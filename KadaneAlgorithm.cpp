#include <iostream>
#include <climits>
using namespace std;

void MaxsubarraySum(int *arr, int size)
{
    int Maxsum = INT_MIN;
    int currentsum = 0;

    for (int i = 0; i < size; i++)
    {
        currentsum += arr[i];
        Maxsum = max(currentsum, Maxsum);

        if (currentsum < 0)
        {
            currentsum = 0;
        }
    }

    cout << "Maximum subarray sum is : " << Maxsum << endl;
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    MaxsubarraySum(arr, 6);
}