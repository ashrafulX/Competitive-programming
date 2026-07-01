// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

// int main() {
//     FAST_IO;

// int t=1;
// cin>>t;
// while(t--)
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v[i];
//     }
//     map<int,int> mp;
//     bool flag=true;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=2;j*j<=v[i];j++)
//         {
//             while(v[i]%j==0)
//             {
//                 mp[j]++;
//                 v[i]/=j;
//             }
//         }
//         if(v[i]>1)
//             mp[v[i]]++;
//     }


//     for(auto val : mp)
//     {
//         if(val.second %n !=0)
//         {
//             flag=false;
//             break;
//         }

//     }
//     if(flag)
//         cout<<"YES"<<endl;
//             else
//                 cout<<"NO"<<endl;
// }

//    return 0;
// }


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
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        for(int j=2;j*j<=v[i];j++)
        {
            while(v[i] % j ==0)
            {
                mp[j]++;
                v[i]/=j;
            }
        }
        if(v[i]>1)
            mp[v[i]]++;
    }
    bool flag=true;
    for(auto val : mp)
    {
        if(val.second % n != 0)
        {
            flag=false;
            break;
        }
    }
    if(flag)    
        cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
}

   return 0;
}
