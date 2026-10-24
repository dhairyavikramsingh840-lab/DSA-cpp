#include <bits/stdc++.h>
using namespace std;

void printSubsets(string str, string arr)
{
    if (str.size() == 0)
    {
        cout << arr << endl;
        return;
    }
    char ch = str[0];

    // case of yes..
    printSubsets(str.substr(1, str.size() - 1), arr + ch);

    // case of no..
    printSubsets(str.substr(1, str.size() - 1), arr);
}

int main()
{
    string str = "abc";
    string arr = "";
    printSubsets(str, arr);
}