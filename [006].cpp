#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=500005,inf=1e+18;
ll n,m,d=1,x=0,ans=inf,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        x+=a[i];
        while (x-a[d]>=m){
            x-=a[d];
            d++;
        }
        if (x>=m) ans=min(ans,i-d+1);
    }
    cout<<ans*(ans!=inf)-(ans==inf);
}
