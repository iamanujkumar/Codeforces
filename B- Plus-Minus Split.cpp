#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int len=0;
        cin>>len;
        string str;
        cin>>str;
        int p=0,n=0;
        for(int k=0;k<len;k++){
            if(str[k]=='+'){
                p++;
            }
            else n++;
            
        }
        
       cout<<abs(p-n)<<endl;
        
    }
 
    return 0;
}