#include <iostream>
using namespace std;

int FindIntersection(int arr[], int aar[], int m, int n)
{
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == aar[j])
            {
                ans = arr[i];
                break;
            }
        }
    }
    return ans;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int aar[4] = {5, 7, 8, 9};

   cout << FindIntersection(arr,aar,5,4)<< endl;

    return 0;
}