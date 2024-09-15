#include <iostream>
#include <climits>
#define ANUJ_CODE ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
 
void fun() {
    int len;
    cin >> len;
    string result;
    string vowels = "aeiou";
    
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < len / 5 + (i < len % 5); ++j) {
            result += vowels[i];
        }
    }
 
    cout << result << '\n';
}
 
int main() {
    ANUJ_CODE
    int q;
    cin >> q;
    while (q--) {
        fun();
    }
    return 0;
}