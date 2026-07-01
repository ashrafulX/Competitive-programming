#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        int n, m;
        cin >> n >> m;
        
        vector<int> a(m);
        for(int i = 0; i < m; i++){
            cin >> a[i];
        }
        
        int count = 0;
        
        for(int start = 1; start <= n; start++){
            int pos = 0;
            for(int len = start; len <= n && pos < m; len++){
                for(int num = 1; num <= len && pos < m; num++){
                    if(num == a[pos]){
                        pos++;
                    } else {
                        pos = 0;
                        if(num == a[0]){
                            pos = 1;
                        }
                    }
                    
                    if(pos == m){
                        count++;
                        pos = 0;
                    }
                }
            }
        }
        
        cout << count << "\n";
    }
    
    return 0;
}