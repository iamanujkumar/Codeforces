#include <iostream>
using namespace std;

void fun() {
    int a, k;
    cin >> a >> k;
    
    int l = a - k + 1; 
    int r = a;         

    int oddCount = (r + 1) / 2 - l / 2;

    if (oddCount % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while (q--) {
        fun();
    }

    return 0;
}
