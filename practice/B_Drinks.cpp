#include "bits/stdc++.h"
using namespace std;

int main()
{

    int n;
    cin >> n;
    float x = 0.0000;
    for(int i = 0; i< n ; i++)
    {
        float a;
        cin >> a;
        x += a /100.0000;
    }
    cout << ((float) x/n) * 100;

    return 0;
}