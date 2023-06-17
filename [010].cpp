#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll t,n,k;
void Solve(){
    cin>>n>>k;
    cout<<(k-1)/(n-1)+k<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen ("Kth.inp","r",stdin);
    freopen ("Kth.out","w",stdout);
    cin>>t;
    while (t--) Solve();
}
