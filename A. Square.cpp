#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int mini = INT_MAX;
        int maxi = INT_MIN; 
        vector<pair<int, int>> p(4);
        for (int i = 0; i < 4; i++) {
            cin >> p[i].first >> p[i].second;
            mini = min(mini, p[i].first);
            maxi = max(maxi, p[i].first);
        }
        cout <<(maxi-mini)*(maxi-mini)<< endl;
    }

    return 0;
}
