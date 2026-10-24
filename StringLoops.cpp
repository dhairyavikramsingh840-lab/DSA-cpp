#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "Dhairya here";

    for (int i = 0; i < str.length(); i++) // This loop is for printing any specific element ..
    {
        cout << str[i];
    }

    cout << endl;

    for (char ch : str) // This loop is for normally printing elements....
    {
        cout << ch;
    }
}