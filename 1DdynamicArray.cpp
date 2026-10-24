#include <bits/stdc++.h>
using namespace std;
int main()
{

    int size;
    cout << "Enter size : ";
    cin >> size;

    int *ptr = new int[size];

    int x = 1;
    for (int i = 0; i < size; i++)
    {
        ptr[i] = x;
        x++;
        cout << ptr[i] << " ";
    }
    cout << endl;

    return 0;
}