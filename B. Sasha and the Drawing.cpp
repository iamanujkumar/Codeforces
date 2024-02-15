#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
 
int fun(int a, int b) {
    int count=0;
    if(((4*a)-2)==b){ 
        count=ceil(b/2.0)+1; 
    }
    else count= ceil(b/2.0);
    return count;
}
 
int main() {
    int q;
    cin >> q;
    while (q--) {
        int a,b;
        cin>>a>>b;
        int ans=fun(a,b);
        cout<<ans<<endl;
    }
    return 0;
}