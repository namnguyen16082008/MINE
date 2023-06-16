#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=5005;
ll n,x,s,t;
pair <ll,ll> a[N];
ll Check(ll l, ll r, ll s){
    while (l<r){
        ll md=(l+r)/2;
        if (a[md+1].first<=s) l=md+1;
        else r=md;
    }
    return l;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    for (ll i=1;i<=n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a+1,a+n+1);
    for (ll i=1;i<n-1;i++){
        for (ll j=i+1;j<n;j++){
            s=x-a[i].first-a[j].first;
            if (s<a[j+1].first) break;
            t=Check(j+1,n,s);
            if (a[t].first==s){
                cout<<a[i].second<<" "<<a[j].second<<" "<<a[t].second;
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE";
}
