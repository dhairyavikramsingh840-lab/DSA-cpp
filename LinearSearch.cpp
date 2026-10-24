#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == key)
        {
            return true;
        }
    }
    return  ;
}


int binarySearch(int arr[],int target){
    
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int key;
    cin >> key;

    bool found = search(arr, 5, key);
    if (found)
    {
        cout << "The key is present not in the array  .." << endl;
    }
    else
    {
        cout << "The key is  not present in the array .." << endl;
    }

    return 0;
}