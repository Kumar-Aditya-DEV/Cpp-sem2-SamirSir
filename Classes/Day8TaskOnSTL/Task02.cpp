#include <iostream>
#include <list>
using namespace std;

int main()
{

  int m, n, x;
  list<int> L1, L2, mergedList, reversedList;

  cout << "Enter size of L1: ";
  cin >> m;

  cout << "Enter elements for L1:\n";
  for (int i = 0; i < m; i++)
  {
    cin >> x;
    L1.push_back(x);
  }

  cout << "Enter size of L2: ";
  cin >> n;

  cout << "Enter elements for L2:\n";
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    L2.push_back(x);
  }

  mergedList = L1;
  mergedList.insert(mergedList.end(), L2.begin(), L2.end());

  cout << "\nMerged List: ";
  for (int val : mergedList)
    cout << val << " ";

  reversedList = mergedList;
  reversedList.reverse();

  cout << "\nReversed List: ";
  for (int val : reversedList)
    cout << val << " ";

  cout << "\n\nEnter index to delete: ";
  for (int i = 0; i < 3; i++)
  {
    int index;

    cin >> index;

    if (index >= 0 && index < reversedList.size())
    {
      auto it = reversedList.begin();
      advance(it, index);
      reversedList.erase(it);
    }
    else
    {
      cout << "Invalid index\n";
      i--;
    }
  }

  cout << "\nRemaining elements:\n";
  for (int val : reversedList)
    cout << val << " ";

  return 0;
}












// by Het  -> reverse tak only

// #include <iostream>
// #include <list>
// using namespace std;

// int main() {
//     int m,n;
//     cout << "enter m : ";
//     cin >> m;
//     cout << "enter n : ";
//     cin >> n;
//     list<int> l1;
//     list<int> l2;
//     int val1,val2;
//     cout << "enter for list 1 : " <<endl;
//     for (int i = 0; i < m; i++) {
//         cin >> val1;
//         l1.push_back(val1);
//     }
//     cout << "enter for list 2 : " <<endl;
//     for (int i = 0; i < n; i++) {
//         cin >> val2;
//         l2.push_back(val2);
//     }

//     list <int> l;
//     cout << "New merged list created" << endl;
//     for(int value3 : l1){
//         l.push_back(value3);
//     }
//     for(int value4 : l2){
//         l.push_back(value4);
//     }
//     cout << "Elements of merged list : " << endl;
//     for (int value : l){
//         cout << value << endl;
//     }
//     l.reverse();
//     cout << "Elements of reversed merged list : " << endl;
//     for (int value : l){
//         cout << value << endl;
//     }

//     return 0;
// }