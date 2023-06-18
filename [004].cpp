#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll X=1000005,inf=1e+18;
ll n,o,x,a[X];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    a[0]=0;
    for (ll i=1;i<=x;i++) a[i]=inf;
    for (ll i=1;i<=n;i++){
        cin>>o;
        for (ll j=o;j<=x;j++) a[j]=min(a[j],a[j-o]+1);
    }
    cout<<a[x]*(a[x]!=inf)-(a[x]==inf);
}
