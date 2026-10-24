#include <iostream>
using namespace std;

void prime(int n)
{
    int isprime = 1;
    if (n <= 1)
    {
        isprime = 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isprime = 0;
            }
        }
    }
    if (isprime)
    {
        cout << "this number is a prime number " << endl;
    }
    else
    {
        cout << "this number is  not a prime number " << endl;
    }

   
}

int main()
{
    prime(9);
}