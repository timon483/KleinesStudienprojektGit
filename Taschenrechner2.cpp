#include <iostream>

using namespace std;

void input(int& a, int& b, char& op);
void add(const int& a, const int& b, int& res);
void sub(const int& a, const int& b, int& res);
void mult(const int& a, const int& b, int& res);
bool diff(const int& a, const int& b, int& res);
void rechne(const int& a, const int& b, const char& op, int& res); 

int main()
{
  int a(0), b(0),res(0);
  char op;
  
  input(a,b,op);
  rechne(a,b,op,res);
  
}

void input(int& a, int& b, char& op)
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

void add(const int& a, const int& b, int& res)
{
  res = a + b;
}

void sub(const int& a, const int& b, int& res)
{
  res = a - b;
}

void mult(const int& a, const int& b, int& res)
{
  res = a * b;
}

bool diff(const int& a, const int& b, int& res)
{
  if(b == 0) return false;
  res = a / b;
  return true;
}

void rechne(const int& a, const int& b, const char& op, int& res)
{  
  switch(op)
  {
    case '+': 
      add(a,b,res);
      break;
    case '-': 
      sub(a,b,res);
      break;
    case '*': 
      mult(a,b,res);
      break;
    case '/': 
      if(diff(a,b,res) == false)
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