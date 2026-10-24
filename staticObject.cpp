#include <iostream>
using namespace std;

class Example
{
public:
  Example()
  {
    cout << "contructor is called " << endl;
  }
  ~Example()
  {
    cout << "destructor is called " << endl;
  }
};

int main()
{
  int a = 0;
  if (a == 0)
  {
    static Example e;
  }

  cout << "code ended";

  return 0;
}