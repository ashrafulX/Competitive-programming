#include<iostream>
using namespace std;
void getarray(int n,int a[])
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void sortarray(int n,int a[])
{
    while(n-1!=0)
    {
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        n--;
    }
}
int binarySearch(int a[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (a[m] == x)
            return m;
 
        if (a[m] < x)
            l = m + 1;
 
        else
            r = m - 1;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    getarray(n,a);
    sortarray(n,a);
    int x;
    cin>>x;
    int result = binarySearch(a, 0, n - 1, x);
    
    (result == -1)?cout<<"Element is not present in array":cout <<"Element is present in sorted array at index "<<result;
}