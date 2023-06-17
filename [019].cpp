#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n,x=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen ("0406.inp","r",stdin);
    freopen ("0406.out","w",stdout);
    cin>>n;
    while (x*2<=n) x*=2;
    cout<<x;
}
