#include "bits/stdc++.h"

using namespace std;


int main()
{
    int n, m, flag = 0;
    cin >> n >> m;
    for(int i = 0; i < n*m; i++)
        
            {
                char c;
                cin >> c;
                if(c == 'C' || c == 'M' || c == 'Y') 
                {
                    flag = 1;
                    break;
                }
            }
if(flag) cout << "#Color";
else cout << "#Black&White";

    return 0;
}