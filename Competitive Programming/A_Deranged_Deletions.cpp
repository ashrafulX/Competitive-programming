#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO;

int t=1;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int a,b;
    if(!is_sorted(all(v)))
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(v[i]>v[j])
                {
                    a=v[i];
                    b=v[j];
                    break;
                }
            }
        }

        cout<<2<<endl;
        cout<<a<<" "<<b<<endl;

    }

    else
        cout<<"NO"<<endl;
}

   return 0;
}
