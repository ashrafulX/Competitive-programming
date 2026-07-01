#include<bits/stdc++.h>
using namespace std;
class Mystack
{
    private:
    vector<int> v;
    public:
    
    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }
    
    bool empty()
    {
        return v.empty();
    }

};
int main()
{
    Mystack st;
    st.push(10);
    st.push(20);
    st.push(30);

    //print top
    //before print must check stack NULL or not
    if(!st.empty())
    {
        cout<<st.top()<<endl;
    }

    //before pop must check stack NULL or not
    if(!st.empty())
    {
        st.pop();
    }
    
    //size
    cout<<st.size()<<endl;


    
    return 0;
}