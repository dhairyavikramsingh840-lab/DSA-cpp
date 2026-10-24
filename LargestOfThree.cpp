#include <iostream>
using namespace std;

int LargestOfThree(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c && b > a)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    cout << "The largest among three is " << LargestOfThree(a, b, c);
    return 0;
}