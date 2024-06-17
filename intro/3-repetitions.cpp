#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int i, l = s.length(), m = 0, c = 0;
    for (i = 1; i < l; i++)
    {
        if (s[i] == s[i - 1])
            c++;
        else
        {
            m = max(m, c);
            c = 0;
        }
    }
    cout << max(m, c) + 1;
    return 0;
}