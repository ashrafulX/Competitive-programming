#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, large, second;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[0] < a[1])
        {
            large = 1;
            second = 0;
        }
        else
        {
            large = 0;
            second = 1;
        }
        for (int i = 2; i < n; i++)
        {

            if (a[i] > a[large])
            {
                second = large;
                large = i;
            }
            else if (a[i] > a[second] && a[i] != a[large])
            {
                second = i;
            }
        }
        if (large < second)
        {
            cout << large << " " << second << endl;
        }
        else
        {
            cout << second << " " << large << endl;
        }
    }
}