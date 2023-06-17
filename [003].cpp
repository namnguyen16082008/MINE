#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll D=10005;
ll n,m,d,l,s=1,ans=0,a[D]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen ("Offpen.inp","r",stdin);
    freopen ("Offpen.out","w",stdout);
    cin>>n>>m;
    for (ll i=1;i<=n;i++){
        cin>>d>>l;
        for (ll j=s;j<s+d;j++)
            a[j]=l;
        s+=d;
    }
    s=1;
    for (ll i=1;i<=m;i++){
       cin>>d>>l;
       for (ll j=s;j<s+d;j++)
            ans=max(ans,l-a[j]);
        s+=d;
    }
    cout<<ans;
}

