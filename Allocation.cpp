/*
*    @Date    : 2021-02-16 00:02:14
*    @Author  : aerma7309 
*/

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
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 2; i <= n; i++)
        v[i] += v[i - 1];
    cout << (upper_bound(v.begin(), v.end(), m) - v.begin()) - 1 << '\n';
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