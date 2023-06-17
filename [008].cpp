#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1505;
ll n,m,a[N],b[N],d=1,ans=0;
unordered_map <ll,ll> mp;
vector <ll> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen ("Csqr.inp","r",stdin);
    freopen ("Csqr.out","w",stdout);
    cin>>n>>m;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll j=1;j<=m;j++) cin>>b[j];
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=m;j++)
            v.push_back(a[i]-b[j]);
    sort(v.begin(),v.end());
    for (ll i=1;i<v.size();i++){
        d=(d+(v[i]==v[i-1]))*(v[i]==v[i-1])+(v[i]!=v[i-1]);
        ans+=d-1;
    }
    cout<<ans;
}
