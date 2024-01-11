#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s, a = "", b, fl = "0";
        cin >> s;
        int n = s.size();
        for (int i = 0; i < s.size(); i++) {
            a += s[i];
            b = s.substr(i + 1, n - (i + 1));
            if (b.empty() || (b[0] == '0' && b.size() > 1)) {
                continue;
            } else {
                if (stoi(a) < stoi(b)) {
                    fl = "1";
                    cout << a << " " << b << endl;
                    break;
                }
            }
        }
        if (fl == "0") {
            cout << "-1" << endl;
        }
    }
    return 0;
}
