#include <iostream>
#include <vector>
using namespace std;
#define INF 987654321
vector<int> dp;
int N;
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> N;
    dp = vector<int>(N, INF);
    dp[0] = 0;

    for (int i = 0, A; i < N; ++i)
    {
        cin >> A;

        for (int j = 1; j <= A; ++j)
        {
            if (i + j >= N)
            {
                continue;
            }

            dp[i + j] = min(dp[i + j], dp[i] + 1);
        }
    }

    cout << (dp[N - 1] == INF ? -1 : dp[N - 1]);
    return 0;
}