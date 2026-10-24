#include <iostream>
using namespace std;
double min(double a, double b)
{
    if (a < b)
    {

        return a;
    }
    else
    {

        return b;
    }
}
int main()
{
    cout << min(8, 9) << endl;
}