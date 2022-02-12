#include "bits/stdc++.h"
using namespace std;

vector<bool> sieveOfEnthosthenes(int n )
{
    vector<bool> prime(n, true);

    for(int i = 2; i<=n ; i++)
    {
        if(prime[i] == true)
        {
            for(int j = i*i ; j<= n; j+= i)
            {
                prime[j] = false;
            }
        }
    }
    return prime;
}


int main()
{
    int n, m;
    cin >> n >> m;
    vector<bool> prime = sieveOfEnthosthenes(50);
    for(int i = n+1; i<= 50; i++)
    {
        if(prime[i])
         {  
            //  cout << i << prime[i] << endl;
            if(i != m) cout << "NO";
            else cout << "YES";
            return 0;
        }
        
    }
    cout<< "NO";

    return 0;
}   