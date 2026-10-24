#include <iostream>
using namespace std;
int s(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    cout << s(9) << endl;
    ;
    cout << s(99) << endl;
}