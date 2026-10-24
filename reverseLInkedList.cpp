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

    Node *splitatMid(Node *head)
    {
        Node *slow = head;
        Node *fast = head;
        Node *prev = NULL;

        while (fast != NULL && fast->next != NULL)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if (prev != NULL)
        {
            prev->next = NULL;
        }
        return slow;
    }

    Node *merge(Node *left, Node *right)
    {

        List ans;
        Node *i = left;
        Node *j = right;

        while (i != NULL && j != NULL)
        {
            if (i->data <= j->data)
            {
                ans.push_back(i->data);
                i = i->next;
            }
            else
            {
                ans.push_back(j->data);
                j = j->next;
            }
        }

        while (i != NULL)
        {
            ans.push_back(i->data);
            i = i->next;
        }
        while (j != NULL)
        {
            ans.push_back(j->data);
            j = j->next;
        }
        return ans.head;
    }


    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    } 

    Node *mergeSort(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        Node *righthead = splitatMid(head);

        Node *left = mergeSort(head);
        Node *right = mergeSort(righthead);

        return merge(left, right);
    }

    Node* zigzagLL(Node* head){
        Node* righthead =  splitatMid(head);

        Node* rightheadrev = reverse(righthead);

        Node* left = head;
        Node* right = rightheadrev;
        Node* tail = right;

        while(left!=NULL && right!= NULL){
            Node* nextleft = left->next;
            Node* nextright = right->next;


            left->next = right;
            right->next = nextleft;

            tail = right;

           left = nextleft;
           right = nextright;
        }
        if(right!=NULL){
            tail->next= right;
        }

        return head;
    }
};

int main()
{
    List ll;
    ll.push_front(7);
    ll.push_front(3);

    ll.push_front(5);
    ll.push_back(9);
  

    ll.printlist();
   

    
    
   ll.head =  ll.zigzagLL(ll.head);
    
    ll.printlist();

    return 0;
}
