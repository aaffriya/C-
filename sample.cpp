#include <bits/stdc++.h> /* import all */
using namespace std;     /* std */
/*  */
int main()
{ /* declear a vector with name vec */
  vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  /* declear itertor with name item */
  /* loop over itertor */
  vector<int>::iterator ptr; /* Declare pointer varibale */
  for (ptr = vec.begin(); ptr != vec.end(); ptr++)
    cout << (*ptr) << ", "; /* must use * to print the value of refernce */

  /* auto keyword */
  /* must assign value during declere variable with auto keyword */
  auto in = 45;           /* Dynamic set data type */
  auto st = "Hello";      /* Dynamic set data type */
  auto it = vec.begin(); /* Dynamic set data type */
  /* Smart Loop */
  for (auto &item : vec) /* use auto key to smart loop */ /*  &item for orignal value */
    cout << item << ", ";                                

  /* smart auto loop with iterator */
  for (auto it = vec.begin(); it != vec.end(); it++)
    cout << *it << ", ";
  
  return 0;
}
