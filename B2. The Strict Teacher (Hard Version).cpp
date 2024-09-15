#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define vi vector<int>
#define pb push_back
#define all(x) x.begin(), x.end()
#define ANUJ_CODE ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// Function to read input and sort the vector
void read_input(int &n, int &m, int &q, vi &v) {
    cin >> n >> m >> q;
    v.resize(m);
    for (int i = 0; i < m; ++i) {
        cin >> v[i];
    }
    sort(all(v));  // Sort the array for binary search
}

// Function to find the closest element based on the query
int find_closest_element(int n, const vi &v, int query_value) {
    if (query_value < v[0]) {
        return v[0] - 1;  // Query is less than the smallest element
    } else if (query_value > v.back()) {
        return n - v.back();  // Query is greater than the largest element
    } else {
        // Query is in between, find the closest elements using upper_bound
        auto upper = upper_bound(all(v), query_value);
        auto lower = upper - 1;  // Previous element

        // Calculate the mid-point of the two closest elements
        int mid_value = (*upper + *lower) / 2;

        // Return the minimum difference
        return min(abs(mid_value - *upper), abs(mid_value - *lower));
    }
}

// Function to process queries
void process_queries(int n, int q, const vi &v) {
    while (q--) {
        int query_value;
        cin >> query_value;
        int result = find_closest_element(n, v, query_value);
        cout << result << endl;
    }
}

int main() {
    ANUJ_CODE;
    int t;
    cin >> t;
    while (t--) {
        int n, m, q;
        vi v;
        // Read input and sort the array
        read_input(n, m, q, v);
        // Process each query
        process_queries(n, q, v);
    }

    return 0;
}
