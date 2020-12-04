#include <iostream>

using namespace std;


class taschenrechner
{
private:
  int a, b,res;
  char op;
  void add();
  void sub();
  void mult();
  bool diff();  
  
public:
  taschenrechner();
  ~taschenrechner();
  void input();
  void rechne();
};


int main()
{
  taschenrechner rechner;
  
  rechner.input();
  rechner.rechne();
}


taschenrechner::taschenrechner()
{
  a = 0;
  b = 0;
  res = 0;
  op = 0;
}

taschenrechner::~taschenrechner()
{
}

void taschenrechner::input()
{
  cout << "Bitte geben Sie die erste Zahl ein: " ;
  cin >> a;
  cout << endl;
  
  cout << "Bitte geben Sie die zweite Zahl ein: ";
  cin >> b;
  cout << endl;  

  cout << "Bitte geben Sie den Operator (+,-,*,/) ein: ";
  cin >> op;
  cout << endl;
}

void taschenrechner::rechne()
{
  switch(op)
  {
    case '+': 
      add();
      break;
    case '-': 
      sub();
      break;
    case '*': 
      mult();
      break;
    case '/': 
      if(diff() == false)
      {
        cout << "Bitte nicht durch 0 teilen! Auch nicht im Schlaf!!" << endl;
        return;
      }
      else
        break;
    default: 
      cout << "Bitte naechstes Mal gueltigen Operator (+,-,*,/) eingeben!!" << endl; 
      return;
  }
  cout << a << " " << op << " " << b << " = " << res << endl;
}

void taschenrechner::add()
{
  res = a + b;
}

void taschenrechner::sub()
{
  res = a - b;
}

void taschenrechner::mult()
{
  res = a * b;
}

bool taschenrechner::diff()
{
  if(b == 0) return false;
  res = a / b;
  return true;
}