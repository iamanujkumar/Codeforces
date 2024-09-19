
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ANUJ_CODE ios_base::sync_with_stdio(false); cin.tie(nullptr);

void fun() { 
    int x,y,k;
    cin>>x>>y>>k;
    int ans = 2*max((x+k-1)/k , (y+k-1)/k);
    if((x+k-1)/k> (y+k-1)/k) ans--;
    cout<<ans<<endl;
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
