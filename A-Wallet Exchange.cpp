#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        (a+b)%2==0?cout<<"Bob"<<endl:cout<<"Alice"<<endl;
    }
 
    return 0;
}