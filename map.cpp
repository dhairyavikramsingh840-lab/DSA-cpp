#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<float, string> m;

    m[100] = "Dhairya";
    m[101] = "Vikram";
    m[102] = "Singh";

    for (auto it : m)
    {
        cout <<"["<<  it.first <<"]"<<  " : " << it.second << endl;
    }
}
