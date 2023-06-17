#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll l,ans=0,k=0;
string n;
ll Tinh(ll n){
    ll s=0;
    for (ll i=1;i<=n;i++) s=s*10+1;
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen ("Ld1.inp","r",stdin);
    freopen ("Ld1.out","w",stdout);
    cin>>n;
    l=n.size();
    for (ll i=1;i<l;i++) ans+=Tinh(i);
    for (ll i=0;i<l;i++)
        if (n[i]=='0' && k==0) break;
        else if (n[i]=='1' && k==0){
            ll s=0;
            for (ll j=i+1;j<l;j++) s=s*10+int(n[j])-48;
            s++;
            ans+=s;
        }
        else{
            ans+=pow(10,l-i-1);
            k=1;
        }
    cout<<ans;
}
