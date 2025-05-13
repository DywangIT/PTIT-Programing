#include<bits/stdc++.h>
using namespace std;

const int maxn = 15;

int n, m;
set<int> g[maxn];
bool used[maxn];
map<int, int> mp;
int par[maxn];

void bfs(int u) {
    memset(used, false, sizeof used);
    memset(par, 0, sizeof par);
    queue<int> q;
    q.push(u);
    used[u] = true;
    par[u] = 0;
    while(q.size()) {
        int x = q.front();
        q.pop();
        for(auto v : g[x]) {
            if(!used[v]) {
                used[v] = true;
                par[v] = x;
                q.push(v);
            }
        }
    }
}

signed main() {
    int tc; cin >> tc;
    while(tc--) {
        cin >> n >> m;
        mp.clear();
        for(int i = 1; i <= n; i++) g[i].clear();
        for(int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            g[x].insert(y);
        }
        bfs(1);
        int st = 1, en = 2;
        while(en != st) {
            mp[en]++;
            en = par[en];
        }

        mp[en]++;
        bfs(2);
        st = 2, en = 1;
        while(en != st) {
            mp[en]++;
            en = par[en];
        }
        mp[en]++;
        cout << mp.size() << endl;
    }
    return 0;
}