#include <iostream>

using namespace std;

template <class E>
class taschenrechner
{
private:
  E a, b,res;
  char op;
  void add();
  void sub();
  void mult();
  bool diff();  
  
public:
  taschenrechner();
  ~taschenrechner(){}
  void input();
  void rechne();
};


int main()
{
  taschenrechner<float> rechner;
  
  rechner.input();
  rechner.rechne();
}


template <class E>
taschenrechner<E>::taschenrechner()
{
  a = 0;
  b = 0;
  res = 0;
  op = 0;
}

template <class E>
void taschenrechner<E>::input()
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

template <class E>
void taschenrechner<E>::rechne()
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

template <class E>
void taschenrechner<E>::add()
{
  res = a + b;
}

template <class E>
void taschenrechner<E>::sub()
{
  res = a - b;
}

template <class E>
void taschenrechner<E>::mult()
{
  res = a * b;
}

template <class E>
bool taschenrechner<E>::diff()
{
  if(b == 0) return false;
  res = a / b;
  return true;
}