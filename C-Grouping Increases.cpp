#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int len;
        cin >> len;
        vector<int> vec(len);
        int a1 = 1e9, b1 = 1e9, ctn = 0;
        for (int i = 0; i < len; i++) {
            cin >> vec[i];
        }
        for (auto &it : vec) {
 
            if (a1 > b1)
                swap(a1, b1);
            if (it <= a1)
                a1 = it;
            else if (it <= b1)
                b1 = it;
            else
                a1 = it, ctn++;
        }
        cout << ctn << endl;
    }
 
    return 0;
}