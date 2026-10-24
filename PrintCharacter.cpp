#include <iostream>
using namespace std;

void character(char n)
{
    if (n == 'z')
    {
        cout << 'a';
    }
    else if (n == 'Z')
    {
        cout << 'A';
    }
    else
    {
        cout << char(n + 1) << endl;
    }
}
int main()
{
    char ch;
    cout << " Enter a character : ";
    cin >> ch;
    character(ch);
    return 0;
}