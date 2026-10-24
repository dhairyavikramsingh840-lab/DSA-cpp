#include <iostream>
using namespace std;
int summation(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
        digit = 0;
    }
    return sum;
}
int main()
{
    cout << summation(999) << endl;
}