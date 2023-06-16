#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=25,inf=1e+18;
ll n,s=0,ans=inf,a[N],x[N];
void Check(){
    ll t=0;
    for (ll i=1;i<=n;i++) t+=a[i]*x[i];
    ans=min(ans,abs(s-2*t));
}
void Try(ll i){
    for (ll j=0;j<=1;j++){
        x[i]=j;
        if (i<n) Try(i+1);
        else Check();
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        s+=a[i];
    }
    Try(1);
    cout<<ans;
}
