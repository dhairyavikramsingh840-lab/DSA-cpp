#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *pre;

    Node(int val)
    {
        data = val;
        next = pre = NULL;
    }
};

class DoublyList
{
public:
    Node *head;
    Node *tail;

    DoublyList()
    {
        head = tail = NULL;
    }
    void printlist()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void push_front(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {

            newnode->next = head;
            head->pre = newnode;
            head = newnode;
        }
    }

    void pop_front()
    {
        Node *temp = head;
        head = head->next;
        if (head == NULL)
        {
            head->pre = NULL;
        }
        else
        {
            temp->next = NULL;
            delete temp;
        }
    }
};
int main()
{

    DoublyList ll;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printlist();
    ll.pop_front();
    ll.printlist();
}