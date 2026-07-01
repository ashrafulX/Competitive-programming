//Remove duplicate
//value sort rakhe
/*SET BST Maintain kore*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st;
    int n;
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        st.insert(val);
    }
    vector<int> v;
    for(auto it=st.begin(); it != st.end();it++)
    {
        // cout<<*it<<endl;
        v.push_back(*it);
    }
    reverse(v.begin(),v.end());
    for(int x : v)
    {
        cout<<x<<endl;
    }
    return 0;
}
