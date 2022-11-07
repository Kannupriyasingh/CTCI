/**********************************************************************************
Input : Mr John    Smith    "
Output : Mr%20John%20Smith
**********************************************************************************/

#include<bits/stdc++.h>
using namespace std;

string solve (string s)
{
  int end = s.size (), i = 0;
  string res = "";
  while (s[end] == ' ')
    end--;

  while (i < end)
    {
      string curr = "";
      while (s[i] != ' ')
	    curr += s[i++];

      res += (curr + "%20");
      while (s[i] == ' ')
	    i++;

    }
  return res.substr (0, res.size () - 3);
}

int main ()
{
  string s = "Mr John    Smith    ";
  cout << solve (s);
}


