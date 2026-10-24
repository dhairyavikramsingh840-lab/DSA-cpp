#include <bits/stdc++.h>
using namespace std;

int summation(int n)
{
    int sum = 0;

    if (n == 1)
    {
        return 1;
    }

    sum = n + summation(n - 1);

    return sum;
}
int main()
{
    cout << summation(5);
}