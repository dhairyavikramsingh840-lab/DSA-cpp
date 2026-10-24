#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int v;
    list<int> *l;

public:
    Graph(int v)
    {
        this->v = v;
        l = new list<int>[v];
    }

    int addEdge(int u, int v, bool isDirected = false)
    {
        l[u].push_back(v);

        if (!isDirected)
        {
            l[v].push_back(u);
        }
    }

    ~Graph()
    {
        delete[] l;
    }

    void print()
    {
        for (int i = 0; i < v; i++)
        {
            cout << i << "->" << " ";

            for (int v : l[i])
            {
                cout << v << " ";
            }
            cout << endl;
        }
    }
};
int main()
{

    return 0;
}