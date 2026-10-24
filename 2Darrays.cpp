#include <iostream>
using namespace std;
int main()
{

    int rows = 3;
    int column = 2;
    int Matrix[3][2] = {{1, 2},
                        {3, 4},
                        {5, 6}};

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
}