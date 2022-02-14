#include "bits/stdc++.h"

using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int co = e;
    if(a == 1 || b == 1 || c == 1 || d ==1 ) {
        cout << co<< endl;
        }
    else 
    {
        for(int i = 1; i<= e; ++i)
        {
            //check the condition where dragon was not killed
            if((i % a != 0) && (i %b != 0 )&& (i %c != 0 )&& (i %d != 0 )) --co;
        }
        cout << co<< endl;
    }
    

    return 0;
}