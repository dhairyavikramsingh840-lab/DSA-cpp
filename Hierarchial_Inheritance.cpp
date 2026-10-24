#include <bits/stdc++.h>
using namespace std;

class Animal
{

public:
  void eat()
  {
    cout << "eats" << endl;
  }
  void breathe()
  {
    cout << "Breathes" << endl;
  }
};

class Bird : public Animal
{
public:
  void fly()
  {
    cout << "Flies" << endl;
  }
};

class Mammal : public Animal
{
  void walks()
  {
    cout << "walks" << endl;
  }
};
int main()
{

  Bird b1;
  b1.eat();
  b1.fly();
  b1.breathe();
}