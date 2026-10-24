#include<iostream>
using namespace std;
int main (){
    char ch ;
    cout << "enter any number "<< endl;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"this is lowercase."<<endl;
    }
     else if(ch>='A' && ch<='Z'){
        cout<<"this is uppercase."<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<< "this is numeric."<< endl;
    }
    else{
        cout<< "this is special character ."<< endl;
    }
}


