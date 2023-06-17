#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll c[4],m[4];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen ("Cwater.inp","r",stdin);
    freopen ("Cwater.out","w",stdout);
    for (ll i=0;i<=2;i++) cin>>c[i]>>m[i];
    for (ll i=0;i<100;i++){
        ll d=min(m[i%3],c[(i%3+1)%3]-m[(i%3+1)%3]);
        m[i%3]-=d;
        m[(i%3+1)%3]+=d;
    }
    cout<<m[0]<<endl<<m[1]<<endl<<m[2];
}
