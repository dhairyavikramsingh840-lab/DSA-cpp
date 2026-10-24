#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the nuber of terms : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j < i + 1; j++)
        {

            cout << num;
            num = num + 1;
        }
        cout << endl;
    }
}

// OR

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the nuber of terms : ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= i+1 ; j++)
//         {

//             cout << j;

//         }
//         cout << endl;
//     }
// }