#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int max_sum = 0;
    for (int i = 0; i < n - 2; i++) {
        int j = i + 1, k = n - 1;
        while (j < k) {
            int sum = a[i] + a[j] + a[k];
            if (sum > m) {
                k--;
            } else {
                max_sum = max(max_sum, sum);
                j++;
            }
        }
    }
    cout << max_sum << endl;
    return 0;
}
