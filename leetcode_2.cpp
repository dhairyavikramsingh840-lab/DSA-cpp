#include<iostream>
using namespace std;
int main (){
    int n,sum=0;
    cout << "Enter any number : ";
    cin>>n;
    while (n>0){
        if(n&1){
            sum++;
        }
       n=  n >> 1;
    }
    cout << sum << endl;
}