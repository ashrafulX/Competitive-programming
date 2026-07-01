#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist={1,2,3,4,5};
    mylist.insert(next(mylist.begin(),2),100);
    mylist.erase(next(mylist.begin(),2));
    mylist.insert(next(mylist.begin(),2),{100,200,300}); 
    // in{ } we can insert another full list
    mylist.erase(next(mylist.begin(),2),next(mylist.begin(),5));
    //erase 2nd next theke shuru kore , er por index porjonto er age porjonto remove korbe
    for(int val : mylist)
    {
        cout<<val<<" ";
    }

    // Finding
    list<int> search={10,20,30,40,50,60,7,80,90,100};
    int which;
    cin>>which;
    auto it= find(search.begin(),search.end(),which);
    if(it==search.end())
    {
        cout<<"Not Found"<<endl;
    }
    else 
    {
        cout<<"Found"<<endl;
    }
    return 0;
}