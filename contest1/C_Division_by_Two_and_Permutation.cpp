#include "bits/stdc++.h"

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<int, int > mp;
        int arr[n];
        for(int i = 1; i<= n; i++) mp[i]++;
        for(int i = 0; i< n; i++){
            int x;
            cin >> x;
            arr[i] = x;
        }
        bool flag = true;
        for(int i = 0; i<= n; i++)
        {
            if(mp.find(arr[i]) != mp.end() && mp[arr[i]] != 0 ) {
                mp[arr[i]]--;
                continue;}
            else 
            {
                arr[i] /= 2;
                i = 0;
            }
            if(arr[i] == 0) { 
                flag = false;
                break;
            }
        }
        cout << ((flag == true) ? "yes" : "no") << endl;
    }

    return 0;
}