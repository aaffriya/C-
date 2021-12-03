/* */
/* map */
#include <bits/stdc++.h>
using namespace std;

int main()
{
  /* Declare a map */
  map<int, string> m; /* set key, value data type */
  m.insert(1, "Bhupender")
  m[4] = "Hello World";

  /* loop over map */
  for (auto &item : m)
  {
    cout << item.first << ": "<<item.second;
  }
}
