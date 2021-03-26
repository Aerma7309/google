#include <bits/stdc++.h>
using namespace std;

int FastIO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

void solve()
{
    int n, k, cnt = 0;
    cin >> n >> k;
    vector<char> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n / 2; i++)
        if (v[i] != v[n - i + 1])
            cnt++;
    cout << ((cnt == k) ? 0 : abs(k - cnt)) << '\n';
}

signed main()
{
    int t, tc = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case #" << tc++ << ": ";
        solve();
    }
    return 0;
}