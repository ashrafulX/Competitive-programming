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
//     int ans=INT_MAX;
//     while(n>0)
//     {
//         int val=n%10;
//         ans=min(ans,val);
//         n/=10;
//     }
//     cout<<ans<<endl;
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
    string s=to_string(n);
    sort(all(s));
    cout<<s[0]<<endl;
}

   return 0;
}
