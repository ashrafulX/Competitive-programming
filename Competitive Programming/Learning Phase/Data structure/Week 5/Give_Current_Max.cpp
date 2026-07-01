#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Student 
{
public:
    string name;
    int roll;
    int marks;

    Student(string n,int r,int m)
    {
        name=n;
        roll=r;
        marks=m;
    }
};

class MaxMarksComparator 
{
public:
    bool operator()(Student& a,Student& b)
    {
        if (a.marks==b.marks) 
        {
            return a.roll>b.roll;
        }
        return a.marks<b.marks;
    }
};

int main() 
{
    int n,Q;
    cin>>n;

    priority_queue<Student,vector<Student>,MaxMarksComparator>q;

    for (int i=0;i<n;i++) 
    {
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        q.push(Student(name,roll,marks));
    }

    cin>>Q;
    while(Q--) 
    {
        int command;
        cin>>command;

        if (command==0) 
        {
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            q.push(Student(name,roll,marks));
            cout<<q.top().name<<" "<<q.top().roll<<" "<<q.top().marks<<endl;
        } 
        else if(command==1) 
        {
            if(q.empty()) 
            {
                cout<<"Empty"<<endl;
            } 
            else 
            {
                cout<<q.top().name<<" "<<q.top().roll<<" "<<q.top().marks<<endl;
            }
        } 
        else if(command==2) 
        {
            if(!q.empty()) 
            {
                q.pop();
            }
            if (q.empty()) 
            {
                cout<<"Empty"<<endl;
            } 
            else 
            {
                cout<<q.top().name<<" "<<q.top().roll<<" "<<q.top().marks<<endl;
            }
        }
    }

    return 0;
}