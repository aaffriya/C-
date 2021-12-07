/* map */
#include <bits/stdc++.h>
using namespace std;

int main()
{
  /* Declare a map */
  unordered_map<int, string> m;          /* set key, value data type */
  m[4] = "World";                        /* Insert data */
  m[5] = "Hello India";                  /* Insert data */
  m[1] = "Hello Japan";                  /* Insert data */
  m[3] = "Hello Bhupender";              /* Insert data */
  m.insert({1, "Value not replaceing"}); /* insert function insert only new value not replace exist value */
  /* loop over map with iterator*/
  for (auto it = m.begin(); it != m.end(); ++it)
    // for (auto &it : m)
    cout << (*it).first << ": " << (*it).second << endl;

  /* find function */
  auto it = m.find(10);
  /* must enter key data type value */
  /* find function return a iterator of given arg || else return m.end() of map */
  /* use like this find function */
  if (it != m.end())
    cout << (*it).first << ": " << (*it).second << endl; /* must use * use for frint value */
  else
    cout << "Not Found\n";

  /* erase function in map */
  m.erase(3);         /* use remove element by key value */
  m.erase(m.begin()); /* use remove element by key iterator */
  /* check iterator is not m.end() otherwise give error */
}
