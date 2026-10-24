#include <bits/stdc++.h>
using namespace std;

void printstack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

void reverseStack(stack<int> &s)
{
    stack<int> temp;

    while (!s.empty())
    {
        temp.push(s.top());
        s.pop();
    }
    stack<int> ans;
    while (!temp.empty())
    {
        ans.push(temp.top());
        temp.pop();
    }

    while (!ans.empty())
    {
        s.push(ans.top());
        ans.pop();
    }
}

int main()
{
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    printstack(s); // Output: 1 2 3 4
    reverseStack(s);
    printstack(s); // Output: 4 3 2 1

    return 0;
}
