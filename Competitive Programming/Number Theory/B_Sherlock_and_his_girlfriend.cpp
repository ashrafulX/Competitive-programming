#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

#define mx 1000005
bool prime[mx];

void sieve()
{
    prime[0] = prime[1] = 1;
    for (ll i = 4; i <= mx; i += 2)
        prime[i] = 1;
    for (ll i = 3; i * i <= mx; i += 2)
    {
        if (!prime[i])
        {
            for (ll j = i * i; j <= mx; j += 2 * i)
                prime[j] = 1;
        }
    }
}

int main()
{
    FAST_IO;

    sieve();

    ll n;
    while (cin >> n)
    {
        if (n < 3)
            cout << "1"<<endl;
        else
            cout << "2"<<endl;;

        for (ll i = 2; i <= n + 1; i++)
        {
            if (prime[i])
                cout << "2 ";
            else
                cout << "1 ";
        }
        cout <<endl;;
    }

    return 0;
}
