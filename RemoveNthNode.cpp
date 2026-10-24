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

    int getSize()
    {
        Node *temp = head;
        int sz = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            sz++;
        }
        return sz;
    }

    void removeNthNode(int n)
    {
        Node *temp = head;
        int size = getSize();
        if (n == size)
        {
            Node *toDel = head;
            head = head->next;
            delete toDel;
            return;
        }

        for (int i = 1; i < (size - n); i++)
        {
            temp = temp->next;
        }

        Node *toDel = temp->next;
        cout << "Going to delete " << toDel->data<< endl;
        temp->next = temp->next->next;
        delete toDel;
    }
};

int main()
{
    List ll;
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);

    ll.printlist();
    ll.removeNthNode(3);
    ll.printlist();

    return 0;
}
