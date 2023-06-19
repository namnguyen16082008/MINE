#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=105,X=1000005,MOD=1e9+7;
ll n,x,c[N],a[X]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    a[0]=1;
    for (ll i=1;i<=n;i++) cin>>c[i];
    for (ll i=1;i<=x;i++)
        for (ll j=1;j<=n;j++)
            if (i>=c[j]) a[i]=(a[i]+a[i-c[j]])%MOD;
    cout<<a[x];
}
