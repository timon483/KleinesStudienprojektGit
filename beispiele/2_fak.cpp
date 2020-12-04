#include <iostream>

using namespace std;

  
int fakultaet(int x)
{
  int k = x;  
  for(int i = x-1; i > 0; i--)
    k *= i;
  
  return k;
}

int main()
{  
  int x;
  cout << "Zahl eingeben:";
  cin >> x;
  cout << endl;
  
  cout << "Die Fakulaet von x ist " << fakultaet(x) << endl;
  
  return 0;
}
