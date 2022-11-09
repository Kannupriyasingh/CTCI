/********************************************************************************************************************************************
Leetcode Link of this Problem : https://leetcode.com/problems/rotate-string/

Input: s = "abcde", goal = "cdeab"
Output: true

Input: s = "abcde", goal = "abced"
Output: false

*********************************************************************************************************************************************/


#include<bits/stdc++.h>
using namespace std;

void rotate(string &s){
    int i = 0;
    char first_char = s[0];
    while (i < s.size()-1){
        s[i] = s[i+1];
        i++;
    }
  s[s.size()-1] = first_char; 
}
bool string_rotation(string &s, string goal){
    for(int i = 1; i <= s.size(); i++){
        rotate(s);
        if(s == goal) return true;
    }
    return false;
}
 
int main(){
    string s = "rotation", goal = "rnotatio";
    cout << string_rotation(s, goal);
    return 0;
}

