#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    map<ll, vector<ll>> span;

    for (int i = 0; i < n; i++) {
        ll t, d;
        cin >> t >> d;
        span[t].push_back(d);
    }

    ll ans = 0;
    multiset<ll> min_deltas;

    for (int i = 1; i <= 2 * 100000; i++) {
        if (span.find(i) != span.end()) {
            for (ll delta : span[i]) {
                min_deltas.insert(delta);
            }
        }

        if (!min_deltas.empty()) {
            ll min_delta = *min_deltas.begin();
            min_deltas.erase(min_deltas.begin());
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
