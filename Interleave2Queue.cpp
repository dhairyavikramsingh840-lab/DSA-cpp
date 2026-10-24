#include <bits/stdc++.h>
using namespace std;

void Interleave(queue<int> &org)
{
    int n = org.size();
    if (n % 2 != 0)
    {
        cout << "Queue size must be even!" << endl;
        return;
    }

    queue<int> q;

    // Step 1: Move first half into q
    for (int i = 0; i < n / 2; i++)
    {
        q.push(org.front());
        org.pop();
    }

    // Step 2: Interleave both queues
    while (!q.empty())
    {
        org.push(q.front());
        
        q.pop();

        org.push(org.front());
        org.pop();
    }
}
int main()
{
    queue<int> org;
    for (int i = 1; i <= 10; i++)
    {
        org.push(i);
    }

    Interleave(org);

    while (!org.empty())
    {
        cout << org.front() << " ";
        org.pop();
    }

    return 0;
}
