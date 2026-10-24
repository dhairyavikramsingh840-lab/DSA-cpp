#include <bits/stdc++.h>
using namespace std;
class Student
{
  string name;
  float cgpa;
  public:

  void Getpercentage()
  {
    cout << (cgpa * 10) << endl;
  }
  // setters

void setName(string newName){
  name = newName;
}

void setCgpa(float newcgpa){
  cgpa = newcgpa;
}
// getters

string getName(){
  return name;
}

float getCgpa(){
 return cgpa;
}

};

int main()
{
  Student s1;
 s1.setName("Dhairya");
 s1.setCgpa(9.0);

 cout << s1.getName()<< endl;
 cout << s1.getCgpa()<< endl;
  return 0;
}