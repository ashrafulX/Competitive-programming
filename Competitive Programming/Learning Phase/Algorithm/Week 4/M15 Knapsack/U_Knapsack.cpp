#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int weight[1005],value[1005];
int solve(int i , int bag)
{
    if(i<0 || bag<=0)
        return 0;
    
    if(weight[i] <= bag)
    {
        if(dp[i][bag] != -1)
        {
            return dp[i][bag];
        }
        else
        {
            int op1=solve(i-1, bag - weight[i])+value[i];
            int op2=solve(i-1,bag);
            dp[i][bag]=max(op1,op2);
            return dp[i][bag];
        }
    }
    else
    {
        dp[i][bag]=solve(i-1,bag);
        return dp[i][bag];
    }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n,bag;
  cin>>n>>bag;
  for(int i=0;i<n;i++)
  {
    cin>>weight[i]>>value[i];
  }
  memset(dp,-1,sizeof(dp));
  cout<<solve(n-1,bag);
  
    return 0;
}