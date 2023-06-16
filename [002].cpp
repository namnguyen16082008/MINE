#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=200005;
ll n,k,d=1,ans=0,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for (ll i=1;i<=n;i++){
        while (a[i]-a[d]>k) d++;
        ans=max(ans,i-d+1);
    }
    cout<<ans;
}
