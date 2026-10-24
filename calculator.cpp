#include <iostream>
using namespace std;
int main()
{
   int a, b;
   char op;

   cout << "Enter a : ";
   cin >> a;

   cout << "Enter b : ";
   cin >> b;

   cin >> op;

   switch (op)
   {
   case '+':
      cout << " a+b = " << a + b << endl;
      break;
   case '-':
      cout << " a-b = " << a - b << endl;
      break;
   case '/':
      cout << " a/b = " << a / b << endl;
      break;
   case '*':
      cout << " a*b = " << a * b << endl;
      break;
   default:
      cout << "invalid operator..." << endl;
   }

   return 0;
}