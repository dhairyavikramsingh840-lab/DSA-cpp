#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of terms : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << char('A' + j - 1);
        }
        cout << endl;
    }
}