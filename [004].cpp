#include <bits/stdc++.h>
#define ll long long int

using namespace std;

string s,t,ans="";
void Check(){
    if (ans.size()<t.size()) return;
    for (ll i=ans.size()-t.size();i<ans.size();i++)
        if (ans[i]!=t[i-(ans.size()-t.size())]) return;
    for (ll i=1;i<=t.size();i++) ans.erase(ans.size()-1,1);
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen ("Mom.inp","r",stdin);
    freopen ("Mom.out","w",stdout);
    cin>>s>>t;
    for (ll i=0;i<s.size();i++){
        ans+=s[i];
        Check();
    }
    cout<<ans;
}
