#include<bits/stdc++.h>
using namespace std;
class Mystack
{
    private:
    list<int> mylist;
    public:
    
    void push(int val)
    {
        mylist.push_back(val);
    }

    void pop()
    {
        mylist.pop_back();
    }

    int top()
    {
        return mylist.back();
    }

    int size()
    {
        return mylist.size();
    }
    
    bool empty()
    {
        return mylist.empty();
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