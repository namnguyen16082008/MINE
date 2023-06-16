#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=10,inf=1e+18;
ll t,n,a[N];
void Solve(){
    cin>>n;
    ll ans1=inf,ans2=-inf;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<=n;i++){
        ll d=1;
        while (a[i+1]-a[i]<=2 && i<n){
            i++;
            d++;
        }
        ans1=min(ans1,d);
        ans2=max(ans2,d);
    }
    cout<<ans1<<" "<<ans2<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
