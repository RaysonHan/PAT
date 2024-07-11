#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int k = 0;

    while(n != 1) {
        k++;
        if(n % 2 == 0) {
            n >>= 1;
        } else {
            n = (3 * n + 1) >> 1;
        }
    }
    cout << k;

    return 0;
}
