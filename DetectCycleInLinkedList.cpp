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
    public:
    Node *head;
    Node *tail;

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

    bool isCycle(Node*head){
        Node* slow = head;
        Node* fast = head;

        while(fast!= NULL  && fast!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                cout<< "Cycle exists.."<< endl;
                return true;
            }
        }
        cout << "Cycle doesn't exists.."<< endl;
        return false;
    }
};

int main()
{
    List ll;
    ll.push_front(40);
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);

   ll.tail->next = ll.head;
   ll.isCycle(ll.head);


    return 0;
}
