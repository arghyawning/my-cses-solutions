#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int n;
    cin >> n;
    while (n > 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
            n = n >> 1;
        else
            n = 3 * n + 1;
    }
    cout << n << endl;
    return 0;
}