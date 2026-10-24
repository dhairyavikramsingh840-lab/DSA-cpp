#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    cout << &a;
    int *ptr = &a;
    cout << *ptr << endl;
}