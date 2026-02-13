#include <iostream>
#include <set>
using namespace std;

int main()
{

  multiset<int> s1;
  multiset<int> s2 = {34, -78, 56, 32, 78, 34, -78, 34};

  for (int value : s2)
  {
    cout << value << endl;
  }

  // s2.erase(34);

  cout << endl;

  for (int value : s2)
  {
    cout << value << endl;
  }

  cout << s2.count(-78) << endl;
  cout << s2.count(34) << endl;

  auto itr = s2.find(-76);

  if (itr != s2.end())
  {
    cout << "Element got:  " << *itr << endl;
  }
  else
  {
    cout << "Given element is not exist" << endl;
  }

  return 0;
}