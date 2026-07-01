#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        
        for(int i=0;i<a.size();i++)
        {
            if(a.find(b)!=-1)
            {
                int y=a.find(b);
                a.replace(y, b.length(), "#");            
            }
        }
        cout<<a<<endl;
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int T;
//     cin >> T;

//     while (T--)
//     {
//         string S, X;
//         cin >> S >> X;

//         size_t pos = 0;
//         while ((pos = S.find(X, pos)) != string::npos)
//         {
//             S.replace(pos, X.length(), "#");
//             pos += 1;
//         }

//         cout << S << endl;
//     }

//     return 0;
// }