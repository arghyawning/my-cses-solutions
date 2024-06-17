#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    if (n == 1)
        cout << "1";
    else if (n <= 3)
        cout << "NO SOLUTION";
    else if (n == 4)
        cout << "2 4 1 3";
    else
    {
        int i;
        for (i = n - 1; i >= 1; i -= 2)
            cout << i << " ";
        for (i = n; i >= 1; i -= 2)
            cout << i << " ";
    }
    return 0;
}