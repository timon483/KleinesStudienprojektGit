#include <iostream>

using namespace std;

void fibonacci(int x, int* fib)
{
  for(int i = 2; i < x; i++)
  {
    fib[i] = fib[i-2] + fib[i-1];
    cout << fib[i]<< " ";
  }
}

int main()
{  
  
  int x;
  cout << "Grenze eingeben:";
  cin >> x;
  cout << endl;
  
  int fib[x];
  fib[0]=0;
  fib[1]=1;
  
  fibonacci(x,fib);
  
  for(int i = 0; i < x; i++)
    cout << fib[i] << " ";
  cout << endl;
  
  return 0;
}
