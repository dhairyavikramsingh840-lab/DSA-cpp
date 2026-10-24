#include <iostream>
using namespace std;

int summation(int n)
{
    int sum = 0;

    while (n > 0)
    {
        int num = n % 10;
        sum = sum + num;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter the number of terms : ";
    cin >> n;
    cout << "The sum of digits of this number is : " << summation(n);
}