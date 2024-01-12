#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int ind;
        stack<long long>upp,lwr;
        map<long long,char>mp;
        for(int i=0;i<s.size();i++){
            if(s[i]=='B'){
                if(!upp.empty()){
                    ind=upp.top();
                    mp[ind]='$';
                    upp.pop();
                }
                continue;
            }
            if(s[i]=='b'){
                if(!lwr.empty()){
                    ind=lwr.top();
                    mp[ind]='$';
                    lwr.pop();
                }
                continue;
            }
            mp[i]=s[i];
            if(isupper(s[i])){
                upp.push(i);
            }
            else lwr.push(i);

        }
        for(int i=0;i<s.size();i++){
            if(mp.count(i) and mp[i]!='$'){
                cout<<mp[i];
            }
        }
        
    }

    return 0;
}
