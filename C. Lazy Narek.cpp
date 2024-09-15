#include <bits/stdc++.h>
#define MAX_N 1010
#define INF -1e9
#define STLEN 5
#define DP(i, j) dp[i][j]
#define FOR(i, str, end) for (int i = (str); i < (end); i++)
#define ANUJ_CODE ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

// Narek's Challenge
int n, m;
string str[MAX_N];
bool flag[256];
int dp[MAX_N][STLEN], panm[MAX_N][STLEN], sts[MAX_N][STLEN];
string te = "narek";

void fun() {
    cin >> n >> m;
    FOR(i, 1, n + 1) cin >> str[i];
    FOR(i, 0, n + 1) {
        FOR(j, 0, STLEN) DP(i, j) = INF;
    }
    FOR(i, 1, n + 1) {
        FOR(ste, 0, STLEN) {
            int cuen = ste;
            int cnt = 0;
            for (char c : str[i]) if (flag[c]) {
                if (c == te[cuen]) cuen = (cuen + 1) % STLEN, cnt++;
                else cnt--;
            }
            panm[i][ste] = cnt;
            sts[i][ste] = cuen;
        }
    }
    DP(0, 0) = 0;
    FOR(i, 1, n + 1) {
        FOR(j, 0, STLEN) {
            DP(i, sts[i][j]) = max(DP(i, sts[i][j]), DP(i - 1, j) + panm[i][j]);
            DP(i, j) = max(DP(i, j), DP(i - 1, j));
        }
    }
    int anss = 0;
    FOR(i, 0, STLEN) anss = max(anss, DP(n, i) - i - i);
    cout << anss << '\n';
}

int main() {
    ANUJ_CODE;
    for (char c : te) flag[c] = 1;
    int q = 1;
    cin >> q;
    while (q--) {
        fun();
    }
    return 0;
}
