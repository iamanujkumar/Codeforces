#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int q;
    cin >> q;
    while (q--) {
        int a;
        cin >> a;
        vector<int> v(a);
        for (int i = 0; i < a; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int ans = 0;
        if (a == 1) {
            ans = v[0];
        } else {
            for (int i = 1; i < a; i++) {
                ans += v[i] - v[i - 1];
            }
        }
        cout << ans << endl;
    }
    return 0;
}