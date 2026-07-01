// myList.remove(V)
// myList.sort()
// myList.sort(greater<type>())
// myList.unique()
// myList.reverse() 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={9,5,6,8,1,2,4,6,7,10,101,101,101};
    //its remove all vale same from mylist
    mylist.remove(101);
    mylist.sort();//asc
    mylist.sort(greater<int>());//desc
    mylist.unique();
    mylist.reverse();
    for(int val : mylist)
    {
        cout<<val<<" ";
    }
    

    
    return 0;
}

