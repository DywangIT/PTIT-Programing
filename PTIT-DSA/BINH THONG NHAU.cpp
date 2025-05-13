#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
int parent[MAXN];

int Find(int u) {
    if (parent[u] != u)
        parent[u] = Find(parent[u]);
    return parent[u];
}

void Union(int u, int v) {
    int a = Find(u);
    int b = Find(v);
    if (a != b)
        parent[b] = a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;
    cin >> Q;

    for (int i = 1; i < MAXN; i++) parent[i] = i;

    while (Q--) {
        int x, y, z;
        cin >> x >> y >> z;
        if (z == 1) {
            Union(x, y);
        }
        else {
            cout << (Find(x) == Find(y) ? "1" : "0") << '\n';
        }
    }

    return 0;
}
