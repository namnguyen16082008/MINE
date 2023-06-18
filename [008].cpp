#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1005,MOD=1e9+7;
ll n,a[N][N];
char x[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    a[1][1]=1;
    for (ll i=0;i<=n;i++){
        a[i][0]=0;
        a[0][i]=0;
    }
    for (ll i=1;i<=n;i++)
        for (ll j=1;j<=n;j++){
            cin>>x[i][j];
            if (i!=1 || j!=1)
                (x[i][j]=='.') ? a[i][j]=(a[i-1][j]+a[i][j-1])%MOD : a[i][j]=0;
        }
    (x[1][1]=='*' || x[n][n]=='*') ? cout<<0 : cout<<a[n][n];
}

