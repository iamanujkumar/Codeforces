#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long>v;
        for(int i=1;i<=n;i++){
           v.push_back(i);
        }
        sort(v.rbegin(),v.rend());
        sort(v.begin(),v.begin()+k+1);
        for(auto &it:v){
            cout<<it<<" ";
        }
    }
}