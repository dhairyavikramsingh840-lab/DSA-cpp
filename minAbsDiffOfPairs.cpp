#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> A = {4, 1, 2, 6};
    vector<int> B = {5, 9, 7, 8};

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());


    int absDiff = 0;

    for (int i = 0; i < A.size(); i++)
    {
        absDiff += abs(A[i] - B[i]);
    }

    cout << absDiff << endl;
    return 0;
}