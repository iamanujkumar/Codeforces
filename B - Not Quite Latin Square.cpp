#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<char>> arr(3, vector<char>(3));
        unordered_map<char,int>mp;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> arr[i][j];
                mp[arr[i][j]]++;
            }
        }
        for(auto it:mp){
            
            if(it.second==2)cout<<it.first<<endl;
        }
    }
    return 0;
}
