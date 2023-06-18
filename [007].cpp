#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
ll Find(ll n){
    ll s=0;
    while (n>0){
        s=max(s,n%10);
        n/=10;
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (ll i=1;;i++){
        n-=Find(n);
        if (n==0){
            cout<<i;
            return 0;
        }
    }
}

