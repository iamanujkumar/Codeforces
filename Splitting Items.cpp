#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    FAST_IO
    int q;
    cin >> q;
    while (q--) {
        int n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<ll>());
        ll ans = 0;
        for (int i = 1; i < n; i += 2) {
            ll diff = v[i-1] - v[i];
            if (diff <= k) {
                k -= diff;
            } else {
                ans += diff - k;
                k = 0;
            }
        }
        if (n % 2 != 0) {
            ans += v[n-1];
        }
        cout << ans << "\n";
    }
    return 0;
}
