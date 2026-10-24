#include <bits/stdc++.h>
using namespace std;

void removeDublicates(string str, int i, bool map[26], string ans)
{
    if (i == str.length())
    {
        cout << "ans is : " << ans << endl;
        return;
    }
    char ch = str[i];
    int mapidx = (int)(str[i] - 'a');

    if (map[mapidx])
    {
        return removeDublicates(str, i + 1, map, ans);
    }
    else
    {
        map[mapidx] = true;
        return removeDublicates(str, i + 1, map, ans + str[i]);
    }
}

int main()
{
    string str = " ddhhaaiirryyaa";
    bool map[26] = {false};
    string ans = "";
    removeDublicates(str, 0, map, ans);
}