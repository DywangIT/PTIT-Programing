#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int MAX_N = 1e5 + 5;
const int MAX_VAL = 1e6 + 5;

int BIT[MAX_VAL] = {0};

void update(int idx, int val)
{
    while (idx < MAX_VAL)
    {
        BIT[idx] += val;
        idx += idx & -idx;
    }
}

int query(int idx)
{
    int sum = 0;
    while (idx > 0)
    {
        sum += BIT[idx];
        idx -= idx & -idx;
    }
    return sum;
}

int main()
{
    faster();

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    stack<int> st;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] & 1)
        {
            while (!st.empty())
            {
                update(st.top(), 1);
                st.pop();
            }
        }
        else
        {
            res += query(MAX_VAL - 1) - query(a[i]);
            st.push(a[i]);
        }
    }

    cout << res;
    return 0;
}


// tạo cây fenwich để cộng dồn số chẵn được duyệt 
//      update: dùng để cộng 1 vào BIT[chính nó] và +1 vào các BIT[có chứa nó] idx += idx & -idx
//      query: truy ngược về những thằng cộng thành nó để tính nó idx -= idx & -idx
// tạo stack lưu tạm thời các số chẵn trước khi gặp số lẻ
// Khi gặp số lẻ thì update cho tất cả số đó rồi đẩy hết ra khỏi stack và khi gặp số chẵn tiếp theo thì đếm số lượng số chẵn lớn hơn nó trước đó bằng cách: query(MAX_VAL - 1) - query(a[i]) và thêm nó vào stack