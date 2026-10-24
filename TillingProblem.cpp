//PRINT THE NUMBER OF WAYS TO FILL THE FLOOR...

#include<bits/stdc++.h>
using namespace std;
int TillingProblem(int n){

    if(n==0 || n==1){
        return 1;
    }

    return TillingProblem(n-1) + TillingProblem(n-2);
}

int main (){
 cout << TillingProblem(5) << endl;
 
}