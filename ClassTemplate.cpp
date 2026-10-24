#include <bits/stdc++.h>
using namespace std;
template <class T>
class Stack
{
    vector<T> vec;

public:
    void push(T val)
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

    T top()
    {
        // if (isEmpty())
        // {
        //     cout << "Stack is empty.." << endl;
        //     return -1;
        // }

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
    Stack<string> s;
    s.push("Singh");
    s.push("Vikram");
    s.push("Dhairya");

    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}