#include<iostream>
using namespace std;
int main (){
    int Matrix[4][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12},
                      {13, 14, 15, 16}};

                      cout << Matrix << endl;

// Maxtix pointers are also known as row pointers because they always point any of the rows in that matrix ..

// if we have to find a specific location of an element then we use ...

cout << &Matrix[1][2]<< endl;
        //OR

        cout << *(*(Matrix+2)+2);
                      
}