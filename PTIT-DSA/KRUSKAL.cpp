#include<bits/stdc++.h>
using namespace std;

struct edge {
    int u, v;
    int w;
};
int n, m;
vector<edge> canh;
vector<int> par(1e6), sz(1e6);

void Make_set() {
    for (int i = 0; i < 1e6; i++) {
        par[i] = i;
        sz[i] = 1;
    }
}

int Find(int n) {
    if (n == par[n]) return n;
    return Find(par[n]);
}

bool Union(int a, int b) {
    a = Find(a);
    b = Find(b);
    if (a == b) return false;
    if (sz[a] < sz[b]) swap(a, b);
    par[b] = a;
    sz[a] += sz[b];
    return true;
}

bool cmp(edge a, edge b) {
    return a.w < b.w;
}

void kruskal() {
    int d = 0;
    vector<edge> mst;
    sort(canh.begin(), canh.end(), cmp);
    for (int i = 0; i < m; i++) {
        if (mst.size() == n - 1) break;
        edge e = canh[i];
        if (Union(e.u, e.v)) {
            d += e.w;
            mst.push_back(e);
        }
    }
    cout << d;
}

void testcase() {
    cin >> n >> m;
    canh.clear();
    for (int i = 0; i < m; i++) {
        edge e;
        cin >> e.u >> e.v >> e.w;
        canh.push_back(e);
    }

    Make_set();
    kruskal();
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        testcase();
        cout << endl;
    }
    return 0;
}