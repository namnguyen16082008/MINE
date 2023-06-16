#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s,t;
ll ans=0;
ll Check(ll l, ll r){
    ll x=0;
    for (ll i=0;i<s.size();i++)
        if (i<l || i>r){
            if (s[i]==t[x]) x++;
            if (x==t.size()) return 1;
        }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s>>t;
    for (ll i=0;i<s.size();i++)
        for (ll j=0;j<s.size();j++)
            ans=max(ans,(j-i+1)*Check(i,j));
    cout<<ans;
}
