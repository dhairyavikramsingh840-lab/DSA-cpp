#include <bits/stdc++.h>
using namespace std;
template<class T>
class Node{
    public:
    T data;
    Node* next;

    Node(int val){
        data = val;
        next =NULL;
    }
};
template <class T>
class Stack
{
   Node<T>* head;

public:
    void push(T val)
    {
        //push_front..

        Node<T>* newnode = new Node<T>(val);
        if(head==NULL){
            head = newnode;
        }else{
            newnode->next = head;
            head = newnode;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty.." << endl;
            return;
        }
       //pop_front...

       Node<T>* temp = head;

       head = head->next;
       temp->next  =NULL;
       delete temp;
    }

    T top()
    {
        if (isEmpty())
        {
            cout << "Stack is empty.." << endl;
            return -1;
        }

       return head->data;
    }

    bool isEmpty()
    {
        if (head == NULL)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    // STL wala stack...
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    } 
    cout <<endl;;
    
    return 0;
}