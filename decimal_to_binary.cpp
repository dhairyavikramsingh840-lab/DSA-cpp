#include <iostream>
using namespace std;

void DecimalToBinary(int DecNum)
{
    int n = DecNum;
    int ans = 0;
    int pow = 1;

    while (n > 0)
    {
        int LastDigit = n % 2;
        ans = ans + (LastDigit * pow);
        n = n / 2;
        pow = pow * 10;
    }
    cout << ans;
}
int main()
{
    DecimalToBinary(10);
}