#include <#include <iostream>

using namespace std;

bool test (int year)
{
  if (year % 4==0)
  {
    if (year%400==0) return true;
    if (year%100==0) return false;
    return true;
  }
  else
   return false;
}


int main()
{
  int year;
  cout << "Enter year:";
  cin >> year;
  cout << endl;

  if(test(year))
    cout << year " is a leap year\n";
  else
    cout << year " is not a leap year\n";
 
  return 0;
}
