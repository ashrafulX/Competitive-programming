/**
*   In the name of Allah, the Most Gracious, the Most Merciful.
*   Author : Ashraful Islam
*   Time & Date : 21:43:16 08/09/2025
**/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define MESSI ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lcm(a, b) ((a) * (b)) / __gcd((a), (b))
#define gcd(a, b) __gcd((a), (b))
#define yes cout << "YES\n"
#define no cout << "NO\n"
bool flag;
void rhafsolve()
{
    int k, x;
        cin >> k >> x;
        
        long long start = (1LL << k);
        long long total = (1LL << (k + 1));
        
        if (start == x) {
            cout << "0\n\n";
            return;
        }
        
        map<long long, pair<int, vector<int>>> visited;
        queue<long long> q;
        
        q.push(start);
        visited[start] = {0, {}};
        
        while (!q.empty()) {
            long long chocola = q.front();
            q.pop();
            
            if (chocola == x) {
                cout << visited[chocola].first << "\n";
                for (int op : visited[chocola].second) {
                    cout << op << " ";
                }
                cout << "\n";
                break;
            }
            
            long long vanilla = total - chocola;
            
            if (chocola % 2 == 0 && visited.find(chocola / 2) == visited.end()) {
                vector<int> newOps = visited[chocola].second;
                newOps.push_back(1);
                visited[chocola / 2] = {visited[chocola].first + 1, newOps};
                q.push(chocola / 2);
            }
            
            if (vanilla % 2 == 0 && visited.find(chocola + vanilla / 2) == visited.end()) {
                vector<int> newOps = visited[chocola].second;
                newOps.push_back(2);
                visited[chocola + vanilla / 2] = {visited[chocola].first + 1, newOps};
                q.push(chocola + vanilla / 2);
            }
        }
}
//observation
/**
 
 **/

int main() {
    MESSI;

    int t = 1;
    cin >> t;
    while (t--) 
    {
        rhafsolve();
    }

    return 0;
}