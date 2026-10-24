#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Queue
{
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = tail = NULL;
    }

    void push(int data)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
           tail->next  = newnode;
           tail = newnode;
        }
    }

    void pop(){

        if(empty()){
            cout << "queue is empty";
            return ;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int front(){
         if(empty()){
            cout << "queue is empty";
            return -1;
        }
        return head->data;
    }
    bool empty(){
        if(head==NULL){
            return true;
        }else{
            return false;
        }
    }
};
int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout << q.front()<<  " ";
        q.pop();
    }
}