#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
	//freopen("input.txt", "r", stdin); // File input
    int n;
    cin >> n;

    vector<long long> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    int q;
    cin >> q;
    vector<vector<int>> queries(q, vector<int>(3));
    for (int i = 0; i < q; ++i) {
        cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
    }

    long long totalSum = 0;

    // ?? You write your logic here
    for (int i = 0; i < q; ++i) {
        int type = queries[i][0];
        int l = queries[i][1];
        int r = queries[i][2];

        if (type == 1) {
            // Type 1: Update A[i] = (i - l + 1) * A[l] for i in l to r
            long long base = A[l];
            for (int j = l; j <= r; ++j) {
                A[j] = ((j - l + 1LL) * base)%MOD ;
            }
        } else if (type == 2) {
            // Type 2: Calculate sum A[l..r]
            long long sum = 0;
            for (int j = l; j <= r; ++j) {
                sum = (sum + A[j])%MOD ;
            }
            totalSum = (totalSum + sum)%MOD ;
        }
    }

    cout << totalSum << endl;
    return 0;
}

