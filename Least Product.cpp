#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ngt=0,zro=0;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
               ngt++;
            }
            if(arr[i]==0){
                zro++;
            }
        }
        if(zro!=0) cout<<"0"<<endl;
        else{
            if(ngt%2==0){
                cout<<"1"<<endl;
                cout<<"1"<<" "<<"0"<<endl;
            }
            else cout<<"0"<<endl;
        }
        
        
    }
 
    return 0;
}
