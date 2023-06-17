#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,x;
void Solve(){
    cin>>n;
    ll a[15]={};
    for (ll i=1;i<=n;i++){
        cin>>x;
        a[x%10]++;
    }
    for (ll i=0;i<=9;i++)
        for (ll j=0;j<=9;j++)
            for (ll k=0;k<=9;k++)
                if (a[i]>(i==j)+(i==k) && a[j]>(j==i)+(j==k) && a[k]>(k==i)+(k==j) && (i+j+k)%10==3){
                    cout<<"YES"<<endl;
                    return;
                }
    cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen ("Sum.inp","r",stdin);
    freopen ("Sum.out","w",stdout);
    cin>>t;
    while (t--) Solve();
}
