// /**
// *   In the name of Allah, the Most Gracious, the Most Merciful.
// *   Author : Ashraful Islam
// *   Time & Date : 19:59:52 02/12/2025
// **/
// #include <bits/stdc++.h>
// using namespace std;
// #define MESSI ios::sync_with_stdio(false); cin.tie(0);
// #define ll long long
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
// #define gcd(a, b) __gcd((a), (b))
// #define nline '\n'
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// void rhafsolve()
// {
//     int n;  cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++)    cin>>v[i];
//     int q;      cin>>q;
//     while(q--)
//     {
//         string s;   cin>>s;
//         if(s.size() != n)
//         {
//             no;
//             continue;
//         }
//         map<int,char> aa;
//         map<char,int> bb;
//         bool flag=true;
//         for(int i=0;i<n;i++)
//         {
            
//             int val=v[i];
//             char ch=s[i];
//             if(aa.count(val))
//             {
//                 if(aa[val] != ch)
//                 {
//                     flag=false;
//                     break;
//                 }
//             }
//             if(bb.count(ch))
//             {
//                 if(bb[ch] != val)
//                 {
//                     flag=false;
//                     break;
//                 }
//             }
//             aa[v[i]]=s[i];
//             bb[s[i]]=v[i];

//         }
//         if(flag) yes; else no;
//     }
// }
// //observation
// /**
 
//  **/
// int main() {
//     MESSI;

//     int t = 1;
//     cin >> t;
//     while (t--) 
//     {
//         rhafsolve();
//     }

//     return 0;
// }





/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 19:59:52 02/12/2025
**/
#include <bits/stdc++.h>
using namespace std;
#define MESSI ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define nline '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
void rhafsolve()
{
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin>>v[i];
    int q;      cin>>q;
    while(q--)
    {
        string s;   cin>>s;
        if(s.size() != n)
        {
            no;
            continue;
        }
        map<int,char> aa;
        map<char,int> bb;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            aa[v[i]]=s[i];
            bb[s[i]]=v[i];
        }
        for(int i=0;i<n;i++)
        {
            if(aa[v[i]]!=s[i] || bb[s[i]] !=v[i])
            {
                flag=false;
                break;
            }
        }

        if(flag) yes; else no;

    }
}
//observation
/**
 
 **/
int main() {
    MESSI;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}