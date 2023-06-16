#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1005;
ll n,l,r,a[N],x[2]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    l=1;r=n;
    for (ll i=1;i<=n;i++) cin>>a[i];
    for (ll i=1;i<=n;i++){
        x[i%2]+=max(a[l],a[r]);
        (a[l]>a[r]) ? l++ : r--;
    }
    cout<<x[1]<<" "<<x[0];
}
