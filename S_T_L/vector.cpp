/* vector */
#include <bits/stdc++.h>
using namespace std;

int main()
{
  /* one dim vector */
  vector<int> v = {55, 8745, 54, 8, 541, 878, 5, 454, 4754, 47};
  for (auto item : v)
  {
    cout<<item<<", ";
  }

  /* two dim vector */
  vector<pair<int, int>> V = {{55, 8745}, {54, 8}, {541, 878}, {5, 454}, {4754, 47}};
  for (auto item : V)
  {
    cout << item.first << " " << item.second << endl;
  }

  /* 
  if use only item then make a copy in item
  if use item with reference (&item) then this is a not copy and reference to orignal item in memory address 
  */
}