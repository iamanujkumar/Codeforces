#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l=1,r=1e9;
    cin>>n;
    set<int>st;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a==1)
        l=max(l,b);
        if(a==2){
           r=min(r,b);
        }
        if(a==3){
            st.insert(b);
        }
 
    }
    if(r<l){
        cout<<"0"<<endl;
        continue;
    }
    int ans=r-l+1;
    for(auto it: st){
        if(it>=l && it<=r){
            ans--;
        }
    }
    cout<<ans<<endl;;
    }
}