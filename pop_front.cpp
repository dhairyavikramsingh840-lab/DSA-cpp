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

    ~Node()
    {
        if (next != NULL)
        {
           
            delete next;
            next = NULL;
        }
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

    ~List()
    {
        
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
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

    void pop_front(){
        if(head== NULL){
            cout <<"Linked list is empty";
            return;
        }
        Node* temp = head;
        head = head->next;

        temp->next =NULL;
        delete temp;

        
    }
    void pop_back(){
        Node* temp = head;

        while(temp->next->next!=NULL){
            temp =temp-> next;
        }

        temp-> next = NULL;
        delete tail;
        tail = temp;
    }
};

int main()
{
    List ll;
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);
    ll.printlist();
    ll.pop_back();
    ll.pop_front();
ll.printlist();
    return 0;
}
