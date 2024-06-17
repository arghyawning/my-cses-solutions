#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int i, n;
    cin>>n;
    vector<bool>hm(n+1, false);
    int x;
    for(i=0;i<n-1;i++){
        cin>>x;
        hm[x]=true;
    }
    for(i=1;i<=n;i++){
        if(!hm[i])
            cout<<i;
    }
    cout << endl;
    return 0;
}