#include <bits/stdc++.h>
using namespace std;
class Car 
{
  string name;
  string colour;

  public:

  Car(){

    cout << "constructor without parameters"<< endl;
  }

  Car (string name  , string colour){
     cout << "Constructor with parameters"<< endl; 

      this-> name = name ;
     this -> colour = colour;

  }

  void Start(){
    cout << "Car has been started..."<< endl;
  }

  void Stop(){
    cout << "Car has been stoped..."<< endl;
  }

  string getname(){
    return name;
  }

  string getcolour(){
    return colour;
  }
};

int main()
{
  
Car c1;
Car c2("Maruti 800","white");
Car c3("Fortuner","Black");


   
  return 0;
}