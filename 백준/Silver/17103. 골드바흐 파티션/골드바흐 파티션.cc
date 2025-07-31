#include <iostream>
#include <vector>
#include <cmath>
//#include <unordered_map>

#define endl "\n"
typedef long long ll;
using namespace std;

#define MAX 1000000

int T;
vector<int> PRIMES(MAX + 1, 1);
vector<int> VALID_PRIMES;

// 에라토스테네스의 체
void Eratosthenes() {
    PRIMES[0] = PRIMES[1] = 0;

    for (int i = 2; i <= sqrt(MAX); i++) {
        if (PRIMES[i] == 0)
            continue;
        for (int j = i * i; j <= MAX; j += i) {
            PRIMES[j] = 0;
        }
    }
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    cin >> T;

    Eratosthenes();

    while (T--) {
        int cnt = 0;
        int N;
        cin >> N;

        for (int i = 0; i < N; i++) {
            if (PRIMES.at(i) == 1) VALID_PRIMES.push_back(i);
        }

        int left = 0;
        int right = VALID_PRIMES.size() - 1;

        while (left <= right) {
            int sum = VALID_PRIMES.at(left) + VALID_PRIMES.at(right);
            if (sum == N) {
                cnt++;
                left++;
                right--;
            }
            else if (sum < N) left++;
            else right--;
        }
        cout << cnt << endl;
        VALID_PRIMES.clear();
    }
    return 0;
}