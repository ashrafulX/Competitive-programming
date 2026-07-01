#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    vector<int> score(n);
    for(int i=0;i<n;i++)
    {
        cin>>score[i];
    }
    int t=score[p-1];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(score[i] >= t && score[i] > 0)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}