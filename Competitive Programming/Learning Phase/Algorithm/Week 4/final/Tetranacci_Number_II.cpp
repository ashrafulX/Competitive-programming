#include<bits/stdc++.h>
using namespace std;
long long int tetranacci(int n) {
   if(n==0)
    return 0;
    if(n==1 || n==2)
        return 1;
    if(n==3)
        return 2;
    
    long long a =0;
    long long b =1;
    long long c =1;
    long long d =2;
    long long e;
    for (int i =4;i<=n;i++) {
        e = a+b+c+d;
        a =b;
        b =c;
        c =d;
        d =e;
    }
    return d;
}

int main() {
    int n;
    cin>>n;
    cout<<tetranacci(n)<< endl;
    return 0;
}