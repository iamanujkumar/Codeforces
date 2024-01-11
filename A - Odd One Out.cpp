#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<int>v(3);
        unordered_map<int,int>mp;
        for (int i = 0; i < 3; i++) {   
                cin>>v[i];
                mp[v[i]]++;
        }
        for(auto it:mp){
            
            if(it.second==1)cout<<it.first<<endl;
        }
    }
    return 0;
}
