#include <bits/stdc++.h>
using namespace std;

class Animal{
    string color;

    void eat(){
            cout <<" eats.."<< endl;
    }
    void breathe(){
        cout << "breathes.."<< endl;
    }


};

class Fish : public Animal{
    public:
    int fins;

    void swims(){
        cout << "swims" << endl;
    }

};
int main (){

    Fish F1;
    F1.fins = 3;
    cout << F1.fins;
    F1.swims();


}