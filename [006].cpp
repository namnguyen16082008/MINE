#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005,MOD=1e9+7;
ll n,a[N]={};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    a[0]=1;
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=6;j++)
            if (i>=j) a[i]=(a[i]+a[i-j])%MOD;
    cout<<a[n];
}
