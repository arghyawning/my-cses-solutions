#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    map<int, bool> hm;
    int x;
    while (n--)
    {
        cin >> x;
        hm[x] = true;
    }
    cout << hm.size();

    return 0;
}