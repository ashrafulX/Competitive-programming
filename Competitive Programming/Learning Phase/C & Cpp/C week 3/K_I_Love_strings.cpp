#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    while (n--)
    {
        char a[51];
        char b[52];
        cin>>a>>b;
        int i=0;
        int j=0;
        while (a[i] != '\0' && b[j] !='\0')
        {
            cout<<a[i]<<b[j];
            i++;
            j++;
        }
        while (a[i] !='\0')
        {
            cout<<a[i];
            i++;
        }
        while (b[j] !='\0')
        {
            cout<<b[j];
            j++;
        }
        cout<<endl;
        // cout<<a<<endl<<b;

    }
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {   int t;
//     cin>>t;
//     while(t--)
//     {
//         char a[51];
//         char b[51];
//         cin>>a>>b;
//         int i=0, j=0;
//         while(a[i] !='\0' && b[j] !='\0')
//         {
//             cout<<a[i]<<b[i];
//             i++;
//             j++;
//         }
//         while(a[i] !='\0')
//         {
//             cout<<a[i];
//             i++;
//         }
//         while (b[j] !='\0')
//         {
//             cout<<b[j];
//             j++;
//         }
//         cout<<endl;

//     }
//     return 0;
// }