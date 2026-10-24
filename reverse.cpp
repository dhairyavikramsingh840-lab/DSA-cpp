#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n = 345;
    int ans = 0;
    int i = 0;
    while (n > 0)
    {
        int digit = n % 10;
        ans = ((ans * 10) + digit);
        n = n / 10;
        i++;
    }
    cout << ans;
    
}