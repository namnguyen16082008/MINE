#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const ll N=1000005;
ll n,m=1;
string a[N];
string cong(string a, string b){
    while (a.size()<b.size()) a='0'+a;
    while (a.size()>b.size()) b='0'+b;
    ll nho=0;
    for (ll i=a.size()-1;i>=0;i--){
        ll kq=int(a[i])+int(b[i])-96+nho;
        nho=kq/10;
        a[i]=char(kq%10+48);
    }
    while (a[0]=='0' && a.size()>1) a.erase(0,1);
    return (nho==0) ? a : '1'+a;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    a[0]="1";
    for (ll i=1;i<=n;i++){
        a[i]="0";
        for (ll j=max(i-6,m);j<i;j++) a[i]=cong(a[i],a[j]);
        if (i<=6) a[i]=cong(a[i],"1");
    }
    cout<<a[n];
}
