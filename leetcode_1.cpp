#include <iostream>
using namespace std;
int main()
{
    int n = 234, digit, sum = 0, product = 1;
    while (n > 0)
    {
        digit = n % 10;
        product = digit * product;
        sum = sum + digit;
        n = n / 10;
    }

    cout << product << endl;
    cout << sum << endl;

    int main_answer = product - sum ;

    cout << main_answer<<endl;
}