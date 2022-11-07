/*****************************************************************************************
Input : "aabbc"
Output : 0
 
Input : "abcd"
Output : 1
 
*****************************************************************************************/

#include<bits/stdc++.h>
using namespace std;
bool isUnique (string s)
{
  sort (s.begin (), s.end ());

  for (int i = 1; i < s.size (); i++)
    if (s[i] == s[i - 1])
      return false;

  return true;
}

int main ()
{
  string s = "abc";
  cout << isUnique (s);
}
