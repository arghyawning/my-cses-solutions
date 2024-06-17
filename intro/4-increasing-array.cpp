#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, i, x = 0, p;
    long long int m = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        p = x;
        cin >> x;
        if (i > 0)
        {
            if (p > x)
            {
                m = m + p - x;
                x = p;
            }
        }
    }
    cout << m;
    return 0;
}