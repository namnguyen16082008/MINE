#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,k;
string s;
void Solve(){
    cin>>n>>k>>s;
    s+='?';
    ll d=0;
    for (ll i=0;i<s.size();i++)
        if (s[i]=='*') d++;
        else{
            if (d>=k){
                cout<<"YES"<<endl;
                return;
            }
            d=0;
        }
    cout<<"NO"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while (t--) Solve();
}
