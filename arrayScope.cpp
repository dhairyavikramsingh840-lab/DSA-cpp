#include<iostream>
using namespace std;

int Update( int arr[], int n){

     arr[0] = 120;

     cout << "inside the function .."<< endl;

     for(int i = 0; i<n; i++){

         cout << arr[i]<< " ";
     }
     cout << endl;

   
}
int main (){
    int arr[3] = {1,2,3};
    
    Update(arr,3);

    cout << " inside main array .."<< endl;

    // printing main array..

    for(int i = 0; i<3; i++){
        cout << arr[i] << " ";
    }
}