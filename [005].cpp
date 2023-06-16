#include <bits/stdc++.h>
#define ll long long int

using namespace std;

char a[10][10];
ll ans=0,x[10][10]={};
ll Check(ll i, ll j){
    for (ll k=1;k<i;k++)
        if (x[k][j]==1) return 0;
    ll i1=i,j1=j;
    while (i1>1 && j1>1){
        i1--;
        j1--;
        if (x[i1][j1]==1) return 0;
    }
    i1=i,j1=j;
    while (i1>1 && j1<8){
        i1--;
        j1++;
        if (x[i1][j1]==1) return 0;
    }
    return 1;
}
void Try(ll i){
    for (ll j=1;j<=8;j++)
        if (Check(i,j)==1 && a[i][j]=='.'){
            x[i][j]=1;
            if (i<8) Try(i+1);
            else ans++;
            x[i][j]=0;
        }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (ll i=1;i<=8;i++)
        for (ll j=1;j<=8;j++){
            cin>>a[i][j];
            x[i][j]=0;
        }
    Try(1);
    cout<<ans;
}
