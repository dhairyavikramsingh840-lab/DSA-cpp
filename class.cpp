#include<bits/stdc++.h>
using namespace std;
class Student{
  public:
  string name;
  float cgpa;

  void Getpercentage(){
    cout << (cgpa*10) << endl; 
  }
};

int main()
{
  Student s1;
  s1.cgpa = 9.9;
  s1.name  = "Dhairya";
  cout << s1.name << endl;
   cout << s1.cgpa << endl;
 s1.Getpercentage();
  return 0;
}