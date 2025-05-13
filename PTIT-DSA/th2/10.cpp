#include<bits/stdc++.h>
using namespace std;

const int dx[8] = { 1, 1, 1, 0, -1, -1, -1, 0 };
const int dy[8] = { 1, 0, -1, -1, -1, 0, 1, 1 };

bool match(const vector<string>& grid, const string& word, int x, int y, int dir, int n) {
    for (int k = 0; k < word.size(); k++) {
        int nx = x + dx[dir] * k;
        int ny = y + dy[dir] * k;
        if (nx < 0 || nx >= n || ny < 0 || ny >= n || grid[nx][ny] != word[k]) {
            return false;
        }
    }
    return true;
}

int main() {
    int m;
    cin >> m;
    vector<string> dict(m);

    for (int i = 0; i < m; i++) {
        cin >> dict[i];
    }

    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;

        vector<string> grid(n);
        for (int i = 0; i < n; i++) {
            cin >> grid[i];
        }

        set<string> found;

        for (const string& word : dict) {
            bool ok = false;
            int len = word.size();

            for (int i = 0; i < n && !ok; i++) {
                for (int j = 0; j < n && !ok; j++) {
                    for (int dir = 0; dir < 8 && !ok; dir++) {
                        if (match(grid, word, i, j, dir, n)) {
                            found.insert(word);
                            ok = true;
                        }
                    }
                }
            }
        }

        bool hasOutput = false;
        for (const string& word : dict) {
            if (found.count(word)) {
                string output = word;
                output[0] = toupper(output[0]);
                cout << output << " ";
                hasOutput = true;
            }
        }
        if (!hasOutput) {
            cout << "-" << endl;
        }
    }
    return 0;
}