#include <iostream>

using namespace std;

int main()
{
  int a(0), b(0),res(0);
  char op;
  
  cout << "Bitte geben Sie die erste Zahl ein: " ;
  cin >> a;
  cout << endl;
  
  cout << "Bitte geben Sie die zweite Zahl ein: ";
  cin >> b;
  cout << endl;  

  cout << "Bitte geben Sie den Operator (+,-,*,/) ein: ";
  cin >> op;
  cout << endl;
  
  switch(op)
  {
    case '+': 
      res = a + b;
      break;
    case '-': 
      res = a - b;
      break;
    case '*': 
      res = a * b;
      break;
    case '/': 
      if(b == 0)
      {
        cout << "Bitte nicht durch 0 teilen! Auch nicht im Schlaf!!" << endl;
        return 0;
      }
      res = a / b;
      break;
    default: 
      cout << "Bitte naechstes Mal gueltigen Operator (+,-,*,/) eingeben!!" << endl; 
      return 0;
  }
  cout << a << " " << op << " " << b << " = " << res << endl;
}