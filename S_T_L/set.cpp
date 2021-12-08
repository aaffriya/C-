#include <bits/stdc++.h>
using namespace std;

int main()
{
  unordered_set<int> s = {1, 2, 4, 5, 6, 7, 8, 9, 3, 4, 5, 6, 8, 9}; /* O(1) */
  set<int> bst = {1, 2, 4, 5, 6, 7, 8, 9, 3, 4, 5, 6, 8, 9};         /* O(log(n)) */
  multiset<int> ms = {1, 2, 4, 5, 6, 7, 8, 9, 3, 4, 5, 6, 8, 9};     /* O(log(n)) */
  s.insert(78);
  bst.insert(78);
  ms.insert(78);
  /* Reverse only set or multiset not unordered */
  set<int>::reverse_iterator it = ms.rbegin();
  for (it; it != ms.rend(); ++it)
    cout << *it << ", ";
  cout << endl;
  /* sets not accepts & reference in for loop */
  for (int item : ms)
  {
    cout << item << ", ";
  }

  /* erase function in stl */
  ms.erase(4);          /* remove multivalue element by value */
  ms.erase(ms.begin()); /* remove first (one) element by iterator */
  /* check iterator is not m.end() otherwise give error */

  /* find function */
  auto it = ms.find(4);
  ms.erase(it); /* remove single element by iterator */

  /* must enter key data type value */
  /* find function return a iterator of given arg || else return m.end() */
  /* use like this find function */
  if (it != ms.end())
    cout << *it << endl; /* must use * use for frint value */
  else
    cout << "Not Found\n";

  for (auto item : ms)
    cout << item << ", ";

  return 0;
}