#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " enter the number of terms : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }
        int num = 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1 << " ";
            num = num + 1;
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}