#include <iostream>
using namespace std;

void BinaryToDecimal(int n)
{
    int binNum = n;
    int ans = 0;
    int pow = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        ans = ans + (lastDigit * pow);
        n = n / 10;
        pow = pow * 2;
    }
    cout << ans;
}
int main()
{
    BinaryToDecimal(111111);
}