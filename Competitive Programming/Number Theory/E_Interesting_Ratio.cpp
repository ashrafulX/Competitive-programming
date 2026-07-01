#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
int MAX=1e7+5;
vector<ll> allprimes;
vector<bool> isPrime(MAX, true);
void sieve()
{
    
    for (int i = 2; i*i<=MAX; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < MAX; j += i)
                isPrime[j] = false;
        }
    }

    for (int i = 2; i < MAX; i++)
    {
        if (isPrime[i])
            allprimes.pb(i);
    }
}

int main() {
    FAST_IO;

    sieve();

    vector<ll> answers(MAX, 0);

    for (ll p : allprimes)
    {
        for (ll g = 1; g * p < MAX; g++)
        {
            answers[g * p]++;
        }
    }

    for (int i = 1; i < MAX; i++)
    {
        answers[i] += answers[i - 1];
    }
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << answers[n] << endl;
    }

    return 0;
}
