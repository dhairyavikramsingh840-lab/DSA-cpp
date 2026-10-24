#include <iostream>
using namespace std;

void fabinacci(int n)
{
    int first = 0, second = 1, next;
    for (int i = 1; i <= n; i++)
    {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
}
int main()
{
    fabinacci(20);
}