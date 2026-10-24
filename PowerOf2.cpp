// #include <iostream>
// using namespace std;
// int PowerOfTwo(int n)
// {
//     if (n <= 0)
//     {
//         return false;
//     }
//     else
//     {
//         return ((n & (n - 1)) == 0);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     if (PowerOfTwo(n))
//     {
//         cout << n << "is a power of 2 ." << endl;
//     }
//     else
//     {
//         cout << n << "is not  a power of 2 ." << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int PowerOfTwo(int n)
// {
//     while (n <= 0)
//     {
//         if (n % 2 != 0)
//         {
//             return false;
//         }
//         else
//         {
//             n = n / 2;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     if (PowerOfTwo(n))
//     {
//         cout << n << "is a power of 2 ." << endl;
//     }
//     else
//     {
//         cout << n << "is not  a power of 2 ." << endl;
//     }
// }

#include <iostream>
using namespace std;
bool PowerOfTwo(int n)
{
    for (int i = 1; i < 31; i++)
    {
        if(n>>i!=0){
            return false ;
        }
        else {
           n =n/2;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(PowerOfTwo){
        cout << n<< " is a power of 2 ";
    }
    else {
        cout << n<< " is not a power of 2 ";
    }
}