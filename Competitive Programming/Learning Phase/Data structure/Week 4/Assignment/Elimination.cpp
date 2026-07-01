#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        stack<char> st;
        string s;
        cin>>s;
        for(char c : s)
        {
            if(!st.empty())
            {
                if(st.top()=='0' && c=='1')
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
            else
            {
                st.push(c);
            }
        }
        if(st.empty())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}