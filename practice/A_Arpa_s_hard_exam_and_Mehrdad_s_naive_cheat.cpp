#include "bits/stdc++.h"

using namespace std;

int main()
{

    long int n;
    cin >> n;
    if(n == 0) 
    {
        cout << "1";
        return 0;
    }
    int arr[4] = {6, 8, 4, 2};
    cout << arr[n % 4];

    return 0;
}