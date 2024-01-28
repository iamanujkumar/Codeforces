#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--){
		int n, k;
    cin >> n >> k;

    vector<char> v;

    for (char i = 'a'; i < 'a' + k; i++) {
        v.push_back(i);
    }

    vector<char> resultVector;

    for (int i = 0; i < n; i++) {
        for (const auto &element : v) {
            resultVector.push_back(element);
        }
    }

    for (const auto &element : resultVector) {
        cout << element;
    }
    cout<<endl;
	}
    return 0;
}
