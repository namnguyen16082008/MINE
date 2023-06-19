#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll X=1000005,MOD=1e9+7;
ll n,x,a,b[X]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    b[0]=1;
    for (ll i=1;i<=n;i++){
        cin>>a;
        for (ll j=a;j<=x;j++)
            if (j==a || b[j-a]!=0) b[j]=(b[j]+b[j-a])%MOD;
    }
    cout<<b[x];
}

