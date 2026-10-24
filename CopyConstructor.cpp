#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
  string name;
  string color;
  Car(string name, string color)
  {
    this->name = name;
    this->color = color;
  }

  Car(Car &original){            // COPY CONSTRUCTOR...
    cout << "Copying original to new.."<< endl;;
    name = original.name;
    color = original.color;
  }
};
int main()
{
  Car c1("Maruti suzuki", "White");
  Car c2(c1);
  cout << c2.name << endl;
  cout << c2.color << endl;
}