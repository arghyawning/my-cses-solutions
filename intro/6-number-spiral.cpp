#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin >> test;
    while (test--)
    {
        long long int x, y;
        cin >> x >> y;
        if (x > y)
        {
            if (x % 2 == 0)
                cout << x * x - y + 1;
            else
                cout << (x - 1) * (x - 1) + y;
        }
        else
        {
            if (y % 2 == 1)
                cout << y * y - x + 1;
            else
                cout << (y - 1) * (y - 1) + x;
        }
        cout << endl;
    }
    return 0;
}