#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int Sum = 0;
    if (n == 0)
    {
        return;
    }
  Sum = Sum + n;
    sum(n - 1);

    return Sum;
    
  
}
int main()
{
    sum(3);
    return 0;
}