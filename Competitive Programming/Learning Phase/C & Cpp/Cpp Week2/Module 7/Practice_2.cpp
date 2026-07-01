#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
	string name;
	int roll;
	int marks;
};
int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    int i=0,j=n-1;
    while(i<j)
    {
        Student temp= a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}