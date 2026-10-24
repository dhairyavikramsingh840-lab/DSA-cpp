#include <bits/stdc++.h>
using namespace std;

class Stack
{
    vector<int> vec;

public:
    void push(int val)
    {
        vec.push_back(val);
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty.." << endl;
            return;
        }
        vec.pop_back();
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty.." << endl;
            return -1;
        }

        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }

    bool isEmpty()
    {
        if (vec.size() == 0)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Stack s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}