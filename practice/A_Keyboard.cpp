#include "bits/stdc++.h"

using namespace std;

int main()
{
    //inputs
    char c;
    cin >> c;
    string str;
    cin >> str;

    //logic

    unordered_map<char, int > mp;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i = 0; i< s.length(); i++)  mp[s[i]] = i;
    string res;
    if(c == 'R')
    {
        for(int i = 0; i< str.length(); i++) res += s[mp[str[i]] - 1];       
    }
    else for(int i = 0; i< str.length(); i++) res += s[mp[str[i]] + 1];
    cout << res;

    return 0;
}