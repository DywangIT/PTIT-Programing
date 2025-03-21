#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;
//?0 ? 12 = 28
int n, m, k, isOk;
string bieuthuc;
string Error = "WRONG PROBLEM!";
vector<int> v;
vector<vector<int>> res;

bool isCorrect()
{
    int a = stoi(bieuthuc.substr(0, 2));
    int b = stoi(bieuthuc.substr(5, 2));
    int c = stoi(bieuthuc.substr(10, 2));
    if (a < 10 || b < 10 || c < 10)
        return false;
    if (bieuthuc[3] == '+')
        return a + b == c;
    return a - b == c;
}

void unbox(int i)
{
    if (isOk)
        return;
    if (i == bieuthuc.size())
    {
        if (isCorrect())
        {
            cout << bieuthuc;
            isOk = 1;
        }
        return;
    }
    if (bieuthuc[i] == '?')
    {
        if (i == 3)
        {
            bieuthuc[i] = '+';
            unbox(i + 1);
            bieuthuc[i] = '-';
            unbox(i + 1);
        }
        else
        {
            for (int j = 0; j <= 9; j++)
            {
                bieuthuc[i] = j + '0';
                unbox(i + 1);
            }
        }
        bieuthuc[i] = '?';
    }
    else
        unbox(i + 1);
}

void testCase()
{
    getline(cin, bieuthuc);
    isOk = 0;
    if (bieuthuc[3] == '*' || bieuthuc[3] == '/')
    {
        cout << Error;
        return;
    }
    unbox(0);
    if (!isOk)
        cout << Error;
}

int main()
{
    faster();
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        testCase();
        cout << endl;
    }
    return 0;
}
