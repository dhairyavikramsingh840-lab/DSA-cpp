#include <bits/stdc++.h>
using namespace std;

bool isDublicate(string str)
{
    stack<int> s;

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch != ')')
        {
            s.push(ch);
        }
        else
        {
            if (s.top() == '(')
            {
                return true;
            }
            else
            {
                while (s.top() != '(')
                {
                    s.pop();
                }
                s.pop();
            }
        }
    }
    return false;
}
int main()
{
    string str = "((a+b)(b+c)";

     

    if(isDublicate(str)){
        cout << "There are no extra parenthesis";
    }
    else{
        cout << "Extra parenthesis";
    }
    return 0;
}