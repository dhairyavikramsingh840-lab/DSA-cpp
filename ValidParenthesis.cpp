#include <bits/stdc++.h>
using namespace std;

bool IsValid(string str)
{
    stack<int> s;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            if (s.empty())
            {
                return false;
                
            }

            char top = s.top();
            if ((top == '(' && ch == ')') || (top == '[' && ch == ']') || (top == '{' && ch == '}'))
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
    }

    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string str = "(){[]}";

    if(IsValid(str)){
        cout << "This is a valid parenthesis"<< endl;
    }
    else{
        cout << "This is  not a valid parenthesis"<< endl;
    }
    return 0;
}