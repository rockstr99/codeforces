#include "bits/stdc++.h"
#define ll long long int
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    for(int i = 0; i< s1.size(); i++)
    {
        int x = (s1[i] - '0') ^  (s2[i] - '0');
        cout << x ;
    }
    return 0;
}