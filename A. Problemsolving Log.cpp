#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    vector<int>v(27);
    for(int i=0;i<n;i++){
        v[s[i]-'A']++;
        if(v[s[i]-'A']==(s[i]-'A'+1))
        ans++;
    }
    cout<<ans<<endl;
    }

    return 0;
}