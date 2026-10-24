#include <bits/stdc++.h>
using namespace std;

void PrintArray()
{
    int *ptr = new int[5];

    int x = 1;
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = x;
        x++;
        cout << ptr[i] << " ";
    }

    delete[] ptr;
}
int main()
{
    PrintArray();
    return 0;
}