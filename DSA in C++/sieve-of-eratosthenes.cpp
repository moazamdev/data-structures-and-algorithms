#include <bits/stdc++.h>
using namespace std;

void primeSieve(int n)
{
    bool isprime[n] = {false};
    memset(isprime, false, sizeof(isprime));

    for (int i = 2; i <= n; i++)
    {
        if (isprime[i] == false)
        {
            for (int j = i * i; j <= n; j+=i)
            {
                isprime[j] = true;  
            }
            
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (!isprime[i])
        {
            cout << i << " ";
        }
    }
    
    
}
int main()
{
    cout << endl << endl;
    
    int n;
    cin >> n;
    
    primeSieve(n);
    
    cout << endl << endl;
    return 0;
}