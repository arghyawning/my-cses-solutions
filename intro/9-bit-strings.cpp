#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    long long int mod = 1000000007;

    long long int ans = 1;
    long long int x = 2;
    while (n > 0)
    {
        if (n & 1)
            ans = ans * x % mod;
        x = x * x % mod;
        n = n >> 1;
    }
    cout << ans;

    return 0;
}