#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=300005;
ll n,k,d=1,e=0,ans=0,x,y,a[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        e+=a[i]==0;
        while (e>k){
            e-=a[d]==0;
            d++;
        }
        if (i-d+1>ans){
            ans=i-d+1;
            x=d;
            y=i;
        }
    }
    cout<<ans<<endl;
    for (ll i=1;i<=n;i++)
        (i>=x && i<=y) ? cout<<1<<" " : cout<<a[i]<<" ";
}
