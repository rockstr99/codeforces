#include "bits/stdc++.h"

using namespace std;


int main()
{
    int n , count = 0;
    cin >> n;
    string str;
    string arr[n];
    for(int i =0; i< n; i++)
        cin >> arr[i];

    for(int i = 0; i < n; i++)
    {
        if(count == 0){ str = arr[i]; count++;}
        else if(str != arr[i]) count--;
        else if(str == arr[i]) count++;
    }

    cout << str ;

    return 0;
}