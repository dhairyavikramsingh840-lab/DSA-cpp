#include<iostream>
#include<vector>
using namespace std;

int maxActivities(vector<int> start, vector<int> end){
    int count = 1;
    cout << "Selecting Activities A0"<< endl;
    int currEndTime = end[0];

    for(int i =0; i<=start.size(); i++){
        if(start[i]>=currEndTime){ 
             cout << "Selecting Activities A"<< i<< endl;
            count++;
           
            currEndTime = start[i];
        }
    }
    return count;
}
int main (){
    vector<int> start = {1,3,0,5,8,5};
    vector<int> end = {2,4,7,6,9,9};

   cout <<  maxActivities(start, end);
    return 0;
}