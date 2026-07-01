#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
long long dp[N];
long long int fibo(long long int n)
{
    if(n==1 || n==0)
        return  n;
    
        if(dp[n] != -1)
        {
            return dp[n];
        }
     dp[n]= fibo(n-1) + fibo(n-2);
     return dp[n];
    
}
int main()
{
    memset(dp, -1, sizeof(dp));
    long long n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}