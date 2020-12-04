#include <iostream>
#include <string>

using namespace std;

template <class E>
class stack
{
private:
  E* A;    
  int Top;     // oberstes Element im Stack

public:

  stack(int n);
  ~stack();
  
  const E& top() const;
  const E pop();
  void push(E& x);
  void clear() ;
  int size()  ;
  bool empty();
};

 

int main() 
{
  stack<int> S(100);
  for(int i=0; i<10; i++)
    S.push(i);
  
  stack<string> string_stack(50);
  for(int i=0; i<10; i++)
  {
    string name;
    cout << "Bitte " << i << ".ten Namen eingeben: ";
    cin >> name;
    string_stack.push(name);
  }
}



template<class E> 
stack<E>::stack(int n)
{
  A = new E[n];
  Top = -1;
}

template<class E> 
stack<E>::~stack() { delete [] A; }

template<class E> 
const E& stack<E>::top() const
{
  return A[Top];
}

template<class E> 
const E stack<E>::pop()
{
  int y = Top--;
  return A[y];
}

template<class E> 
void stack<E>::push(E& x)
{
  A[++Top] = x;
}

template<class E> 
void stack<E>::clear() 
{ 
  Top = -1;
}

template<class E> 
int stack<E>::size()  
{ 
  return (Top+1); 
}

template<class E> 
bool stack<E>::empty()
{ 
  return (Top < 0) ? true : false;
}