#include <iostream>
using namespace std;
int value(int n, int r)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << " The factorial of  n is : " << fact << endl;

    int fac = 1;
    for (int i = 1; i <= r; i++)
    {
        fac *= i;
    }
    cout << " The factorial of  r is : " << fac << endl;

    int factorial = 1;
    for (int i = 1; i <= (n - r); i++)
    {
        factorial *= i;
    }
    cout << " The factorial of  (n-r) is : " << factorial << endl;

    int cal = (fact / (fac * (factorial)));

    return cal;
}

int main()
{
    cout << "nCr is : " << value(6, 4) << endl;
    return 0;
}