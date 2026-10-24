#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<int> arr(6,1);

    cout << arr.size();

    for(int i=0; i<arr.size(); i++){
        cout <<  arr[i];
    }
}