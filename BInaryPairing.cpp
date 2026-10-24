#include <bits/stdc++.h>
using namespace std;

void binarypairing(int n, int lastPlace, string ans)
{
    if (n == 0)
    {
        cout << ans << endl;
        return;
    }
    if (lastPlace != 1)
    {

        binarypairing(n - 1, 0, ans + '0');
        binarypairing(n - 1, 1, ans + '1');
    }
    else
    {
        binarypairing(n - 1, 0, ans + '0');
    }
}
int main()
{
    string ans = "";
    binarypairing(4, 0, ans);
    return 0;
}