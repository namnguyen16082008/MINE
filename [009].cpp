#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,m,t;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen ("Ants.inp","r",stdin);
    freopen ("Ants.out","w",stdout);
    cin>>n>>m;
    char a[n+1],b[m+1];
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<=m;i++) cin>>b[i];
    cin>>t;
    for (ll i=1;i<=n/2;i++) swap(a[i],a[n-i+1]);
    for (ll i=1;i<=n-t;i++) cout<<a[i];
    for (ll i=n-t+1;i<=n;i++){
        if (i-(n-t)<=m) cout<<b[i-(n-t)];
        if (i>0 && i<=n) cout<<a[i];
    }
    for (ll i=t+1;i<=m;i++) cout<<b[i];
}
