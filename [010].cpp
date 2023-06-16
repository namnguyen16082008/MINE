#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=100005;
ll t,n,l,r,ans,a[N];
void Solve(){
    cin>>n;
    l=1;r=n;ans=0;
    for (ll i=1;i<=n;i++) cin>>a[i];
    while (l<r){
        if (a[l]>a[r]){
            a[l]=a[l]-a[r];
            r--;
        }
        else if (a[l]<a[r]){
            a[r]=a[r]-a[l];
            l++;
        }
        else{l++;r--;ans--;}
        ans++;
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
