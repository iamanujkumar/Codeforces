#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c=s[0];
        char c1=s[0];
        int n=s[1]-'0';
        int c3=c;
        int c2=c;
        int n1=n;
        int n2=n;
        c3--;
        while(c3>=97){
            char ch=c3;
        cout<<ch<<n<<endl;
        c3--;
        }
        c2++;
while(c2<=104){
            char ch=c2;
        cout<<ch<<n<<endl;
        c2++;
        }
        
        
        while(n1>1){
           
            n1--;
            cout<<c1<<n1<<endl;
        }
       
        while(n2<8){
           
            n2++;
            cout<<c1<<n2<<endl;
        }      
        
    }
 
    return 0;
}