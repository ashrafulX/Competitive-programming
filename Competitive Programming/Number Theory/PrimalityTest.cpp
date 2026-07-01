#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
bool isprime(int n)
{
    if (n < 1)
    {
        return false;
    }
    if (n == 2)
        return true;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    FAST_IO;

    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        if (isprime(n))
            cout << "Prime Number" << endl;
        else
            cout << "Non Prime Number" << endl;
    }

    return 0;
}
