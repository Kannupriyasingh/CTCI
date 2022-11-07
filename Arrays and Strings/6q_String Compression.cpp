/************************************************************************************************************************************
Input : "aaabbbbcd"
Output : a3b4c1d1

Input : "abcd"
Output : "abcd"  
(not a1b1c1d1 because in this question we were asked to return the compressed string and if the compressed
string is longer than the original string then we are supoosed to return the original string.
**************************************************************************************************************************************/

#include<bits/stdc++.h>
using namespace std;

string compress_string(string s){
    string ans = "";
    int i = 0, j = 1;
    while(j <= s.size()){
        while(s[i] == s[j]) {j++;}
        ans += s[i];
        
        // converting int to string
        ostringstream str1;
        str1 << (j-i);
        string freq = str1.str();
        
        ans += freq;
        i = j;
        j++;
    }
    return ans;
}
 
int main(){
    string s = "abcd";
    string compressed = compress_string(s);
    if(s.size() > compressed.size())
        cout << compressed;
    else
        cout << s;
    return 0;
}

