#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
  string name;
  string color;
  int *mileage;
  Car(string name, string color)
  {
    this->name = name;
    this->color = color;
    mileage = new int;
    *mileage = 12;
  }

  Car(Car &original)
  { // COPY CONSTRUCTOR...
    cout << "Copying original to new.." << endl;
    ;
    name = original.name;
    color = original.color;
    mileage = new int;
    *mileage = *original.mileage;
  }
};
int main()
{
  Car c1("Maruti suzuki", "White");
  Car c2(c1);
  cout << c2.name << endl;
  cout << c2.color << endl;
  cout << *c2.mileage;
  *c2.mileage = 10;
  cout << *c1.mileage;
}