#include <iostream>
#include <vector>
#include <algorithm>

#define endl "\n"
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int K, N;
    cin >> K >> N;
    vector<ll> lans(K);
    for (int i = 0; i < K; ++i) {
        cin >> lans[i];
    }

    ll low = 1;
    ll high = *max_element(lans.begin(), lans.end());
    ll ans = 0;

    while (low <= high) {
        ll mid = (low + high) / 2;
        ll cnt = 0;
        for (ll len : lans) {
            cnt += len / mid;
        }
        if (cnt >= N) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << ans << endl;
    return 0;
}
