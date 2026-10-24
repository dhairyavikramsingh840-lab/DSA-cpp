#include <bits/stdc++.h>
using namespace std;
int GetiThBit(int num, int i)
{
    int bitmask = 1 << i;
    if (!(num & bitmask))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int SetiThBit(int num, int i)
{
    int bitmask = 1 << i;

    return (num | bitmask);
}
int main()
{
    int num, i;
    cout << GetiThBit(7, 1);
    cout << SetiThBit(6, 3);
}