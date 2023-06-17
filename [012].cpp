#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll MOD=2019;
string s;
ll ans=0,d=0,x=1,mp[MOD]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen ("Mults.inp","r",stdin);
    freopen ("Mults.out","w",stdout);
    cin>>s;
    for (ll i=s.size()-1;i>=0;i--){
        mp[d]++;
        d=(d+(s[i]-'0')*x)%MOD;
        x=(x*10)%MOD;
        ans+=mp[d];
    }
    cout<<ans;
}
