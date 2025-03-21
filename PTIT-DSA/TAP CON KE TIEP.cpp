#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e6 + 5;

void print(int a[], int k)
{
    for (int i = 0; i < k; i++)
        cout << a[i] << " ";
    cout << endl;
}
    
void testCase()
{
    int n, k;
    cin >> n >> k;
    int C[k];
    for (int i = 0; i < k; i++)
        cin >> C[i];

    for (int i = k - 1; i >= 0; i--)
    {
        if (i == k - 1 && C[i] < n)
        {
            ++C[i];
            print(C, k);
            break;
        }
        else if (i < k - 1 && C[i] < C[i + 1] - 1)
        {
            ++C[i];
            for (int j = i + 1; j < k; j++)
                C[j] = C[j - 1] + 1;
            print(C, k);
            break;
        }
        else if (i == 0)
        {
            C[0] = 1;
            for (int j = 1; j < k; j++)
                C[j] = C[j - 1] + 1;
            print(C, k);
            break;
        }
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        testCase();
    }
    return 0;
}
