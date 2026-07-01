#include<bits/stdc++.h>
using namespace std;
int weight[105],value[105];
int knapsack(int i , int bag)
{
    if(i<0 || bag<=0)
        return 0;
    if(weight[i] <= bag)
    {
        int op1=knapsack(i-1,bag-weight[i])+value[i];
        int op2=knapsack(i-1,bag);
        return max(op1,op2);
    }
    else
    {
        return knapsack(i-1,bag);
    }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>value[i];
  }
  for(int i=0;i<n;i++)
  {
    cin>>weight[i];
  }
  int bag;
  cin>>bag;
  cout<<knapsack(n-1,bag);
    return 0;
}