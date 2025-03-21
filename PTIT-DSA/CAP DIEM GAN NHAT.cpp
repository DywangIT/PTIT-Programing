#include <bits/stdc++.h>
using namespace std;

#define ld long double
#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

int n;

struct newType
{
    ld x, y;
};

ld dis(newType a, newType b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

ld bruteForce(vector<newType> &points, int l, int r)
{
    ld res = LLONG_MAX;
    for (int i = l; i <= r; i++)
    {
        for (int j = i + 1; j <= r; j++)
            res = min(res, dis(points[i], points[j]));
    }
    return res;
}

vector<newType> takePoint(vector<newType> &points, int l, int r, ld midX, ld d)
{
    vector<newType> nearPoint;
    for (int i = l; i <= r; i++)
    {
        if (abs(points[i].x - midX) < d)
            nearPoint.push_back(points[i]);
    }
    sort(nearPoint.begin(), nearPoint.end(), [](newType a, newType b)
         { return a.y < b.y; });
    return nearPoint;
}

ld closePair(vector<newType> &points, int l, int r)
{
    if (r - l + 1 <= 3)
        return bruteForce(points, l, r);

    int m = (l + r) / 2;
    ld dLeft = closePair(points, l, m);
    ld dRight = closePair(points, m, r);
    ld d = min(dLeft, dRight);

    vector<newType> nearPoints = takePoint(points, l, r, points[m].x, d);

    ld res = d;
    for (int i = 0; i < nearPoints.size(); i++)
    {
        for (int j = i + 1; j < nearPoints.size() && (nearPoints[j].y - nearPoints[i].y) < res; j++)
            res = min(res, dis(nearPoints[i], nearPoints[j]));
    }
    return res;
}

void testCase()
{
    cin >> n;
    vector<newType> points(n);
    for (auto &point : points)
        cin >> point.x >> point.y;
    // solve
    sort(points.begin(), points.end(), [](newType a, newType b)
         { return a.x < b.x; });

    cout << fixed << setprecision(6) << closePair(points, 0, n - 1);
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
