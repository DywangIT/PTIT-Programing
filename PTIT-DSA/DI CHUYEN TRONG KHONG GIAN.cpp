#include<bits/stdc++.h>
using namespace std;

int h, a, b;
char box[31][31][31];

struct Point {
    int cao, hoanh, tung;
};

int dh[] = { 0, 0, 0, 0, -1, 1 };
int da[] = { 0, -1, 0, 1, 0, 0 };
int db[] = { -1, 0, 1, 0, 0, 0 };

void testcase() {
    cin >> h >> a >> b;
    Point st, en;
    for (int k = 0; k < h; k++) {
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                cin >> box[k][i][j];
                if (box[k][i][j] == 'S') {
                    st.cao = k;
                    st.hoanh = i;
                    st.tung = j;
                }
                if (box[k][i][j] == 'E') {
                    en.cao = k;
                    en.hoanh = i;
                    en.tung = j;
                }
            }
        }
    }

    vector<vector<vector<bool>>> vis(31, vector<vector<bool>>(31, vector<bool>(31, false)));
    queue<pair<Point, int>> Q;
    Q.push({ st, 0 });
    vis[st.cao][st.hoanh][st.tung] = true;

    while (!Q.empty()) {
        auto top = Q.front();
        Q.pop();

        Point cur = top.first;
        int steps = top.second;

        if (cur.cao == en.cao && cur.hoanh == en.hoanh && cur.tung == en.tung) {
            cout << steps;
            return;
        }

        for (int dir = 0; dir < 6; dir++) {
            int ncao = cur.cao + dh[dir];
            int nhoanh = cur.hoanh + da[dir];
            int ntung = cur.tung + db[dir];

            if (ncao >= 0 && ncao < h && nhoanh >= 0 && nhoanh < a && ntung >= 0 && ntung < b && box[ncao][nhoanh][ntung] != '#' && !vis[ncao][nhoanh][ntung]) {
                vis[ncao][nhoanh][ntung] = true;
                Point tmp;
                tmp.cao = ncao;
                tmp.hoanh = nhoanh;
                tmp.tung = ntung;
                Q.push({ tmp, steps + 1 });
            }
        }
    }
    cout << -1;
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