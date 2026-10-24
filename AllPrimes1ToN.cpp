#include <iostream>
using namespace std;

bool isprime(int n)
{
    if (n == 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;

            break;
        }
    }
    return 1;
}

void AllPrimes(int n)
{

    for (int i = 2; i <= n; i++)
    {
        if (isprime(i))
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n;

    cout << "Enter the number of terms : ";

    cin >> n;

    AllPrimes(n);
}