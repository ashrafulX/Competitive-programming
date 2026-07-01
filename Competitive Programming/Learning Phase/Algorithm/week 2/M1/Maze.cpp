#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}}; 
char maze[1005][1005];
bool vis[1005][1005];
pair<int,int> parent[1005][1005];
int n,m;

bool Valid(int i,int j)
    {
        if(i<0 || j<0 || i>=n || j>=m )
            return false;
                else
                    return true;
    }

    
void bfs(int si, int sj) {
    queue<pair<int,int>> q;
    
    q.push({si, sj});
    vis[si][sj] = true;
    
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if(maze[x][y] == 'D') continue;
        
        for(auto movement : d) {
            int ci = x + movement.first;
            int cj = y + movement.second;
            
            if(Valid(ci, cj) && !vis[ci][cj] && 
               (maze[ci][cj] == '.' || maze[ci][cj] == 'D')) {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {x, y};
            }
        }
    }
}

void track(int desti, int destj) {
    int x = desti, y = destj;
    while(maze[x][y] != 'R') {
        if(maze[x][y] != 'D') {
            maze[x][y] = 'X';
        }
        int tmpi = parent[x][y].first;
        int tmpj = parent[x][y].second;
        x = tmpi;
        y = tmpj;
    }
}

int main() {
    cin>>n>>m;
    
    int si = -1, sj = -1;
    int desti = -1, destj = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> maze[i][j];
            if(maze[i][j] == 'R') {
                si = i;
                sj = j;
            }
            if(maze[i][j] == 'D') {
                desti = i;
                destj = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    
    bfs(si, sj);
    
    if(vis[desti][destj]) {
        track(desti, destj);
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << maze[i][j];
        }
        cout << endl;
    }
    
    return 0;
}