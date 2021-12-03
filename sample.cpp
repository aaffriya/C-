#include <bits/stdc++.h> /* import all */
using namespace std;     /* std */
/*  */
int main()
{ /* declear a vector with name vec */
  vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  /* declear itertor with name item */
  vector<int>::iterator pointer;
  // /* loop over itertor */
  for (pointer = vec.begin(); pointer != vec.end(); pointer++)
  {
    cout << *pointer << ", "; /* must use * to print the value of refernce */
  }

  /* auto keyword */
  auto in = 45;            /* Dynamic set data type */
  auto st = "Hello";       /* Dynamic set data type */
  auto ::iterator pointer; /* Dynamic set data type */

  /* Smart Loop */
  for (auto &item : vec) /* use auto key to smart loop */ /* if use refernce use--> &item */
  {
    cout << item << ", "; /*this is refernce of orignal not a copy  */
  }


  return 0;
}