#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }

};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
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
            head = newnode;
        }
    }

    

    void push_back(int val)
    {
        Node *newnode = new Node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void printlist()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void insert(int val, int pos)
    {
        Node *newnode = new Node(val);

        Node *temp = head;

        for (int i = 0; i < pos - 1; i++)
        {

            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
};

int main()
{
    List ll;
    ll.push_front(30);
    ll.push_front(20);

    ll.push_front(10);
    ll.push_back(4);
    ll.push_back(5);

    ll.printlist();
    ll.insert(45, 6);
    ll.printlist();

    

    return 0;
}
