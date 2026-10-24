#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  string key;
  int val;
  Node *next;

  Node(string key, int val)
  {
    this->key = key;
    this->val = val;
    next = NULL;
  }

  ~Node()
  {
    if (next != NULL)
    {
      delete next;
    }
  }
};

class HashTable
{
  int totalSize;
  int currsize;
  Node **table;

  int hashFunction(string key)
  {
    int idx = 0;

    for (int i = 0; i < key.size(); i++)
    {
      idx += (key[i] * key[i]) % totalSize;
    }
    return idx % totalSize;
  }

  void rehash()
  {
    Node **oldtable = table;
    int oldsize = totalSize;

    totalSize = totalSize * 2;
    currsize = 0;

    table = new Node *[totalSize];

    for (int i = 0; i < totalSize; i++)
    {
      table[i] = NULL;
    }

    for (int i = 0; i < oldsize; i++)
    {
      Node *temp = oldtable[i];

      while (temp != NULL)
      {
        insert(temp->val, temp->key);
        temp = temp->next;
      }
      if (oldtable[i] != NULL)
      {
        delete oldtable[i];
      }
    }
    delete[] oldtable;
  }

public:
  HashTable(int size)
  {
    totalSize = size;
    table = new Node *[totalSize];
    for (int i = 0; i < totalSize; i++)
    {
      table[i] = NULL;
    }
  }

  void insert(int val, string key)
  {
    int idx = hashFunction(key);

    Node *newNode = new Node(key, val);

    newNode->next = table[idx];

    table[idx] = newNode;

    currsize++;

    double lambda = currsize / (double)totalSize;
    if (lambda > 1)
    {
      rehash();
    }
  }

  bool exists(string key)
  {
    int idx = hashFunction(key);

    Node *temp = table[idx];

    while (temp != NULL)
    {
      if (temp->key == key)
      {
        return true;
      }
      temp = temp->next;
    }
    return false;
  }

  int search(string key)
  {
    int idx = hashFunction(key);

    Node *temp = table[idx];

    while (temp != NULL)
    {
      if (temp->key == key)
      {
        return temp->val;
      }
      temp = temp->next;
    }
    return -1;
  }

  void erase(string key)
  { 
    int idx = hashFunction(key);

    Node* temp = table[idx];
    Node* prev = temp;

    while(temp!= NULL){
      if(temp->key == key){
        if(prev == temp){
          table[idx] = temp->next;
        }
        else{
          prev->next = temp->next;
        }
        break;
      }
      prev = temp;
      temp = temp->next;
    }

  }
};

int main()
{

  return 0;
}