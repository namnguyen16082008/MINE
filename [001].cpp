#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,a,b,c,x[4]={},y[4]={},z[4]={},ans1=0,ans2=0,ans3=0;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen ("Game.inp","r",stdin);
    freopen ("Game.out","w",stdout);
    cin>>n;
    x[1]=1;y[2]=1;z[3]=1;
    for (ll i=1;i<=n;i++){
        cin>>a>>b>>c;
        swap(x[a],x[b]);
        swap(y[a],y[b]);
        swap(z[a],z[b]);
        ans1+=x[c];
        ans2+=y[c];
        ans3+=z[c];
    }
    cout<<max(ans1,max(ans2,ans3));
}
