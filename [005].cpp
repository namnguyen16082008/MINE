#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll n,k,d=1,x=0,ans=0,a[N];
unordered_map <ll,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for (ll i=1;i<=n;i++){
        cin>>a[i];
        x+=mp[a[i]]==0;
        mp[a[i]]++;
        while (x>=k){
            if (mp[a[d]]==1 && x==k) break;
            mp[a[d]]--;
            x-=mp[a[d]]==0;
            d++;
        }
        ans+=d*(x==k);
    }
    cout<<ans;
}
