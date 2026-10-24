#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> arr;

cout << "Size is :"<< arr.size()<< endl;
cout << "Capacity is : "<<arr.capacity()<< endl;

arr.push_back(1);

cout << "Size is :"<< arr.size()<< endl;
cout << "Capacity is : "<<arr.capacity()<< endl;

arr.pop_back();

cout << "Size is :"<< arr.size()<< endl;
cout << "Capacity is : "<<arr.capacity()<< endl;


}