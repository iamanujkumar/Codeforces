/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        set<char>st;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
            ans+=st.size();
        }
        cout<<ans<<endl;
    }

    return 0;
}
