#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int q;
    cin>>q;
    while (q--) {
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>v(a+1,-1);
        for(int i=c;i<=b;i++){
            v[i]=1;
        }
        int val=-1;
        for(int i=c-1;i>=1;i--){
            v[i]=val;
            val=-val;
        }
     
        val=-1;
        for(int i=b+1;i<=a;i++){
                v[i]=val;
                val=-val;
            }
         for(int i=1;i<=a;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
    }
    return 0;
}