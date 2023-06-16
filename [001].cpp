#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll n;
ll Fb(ll n){
    return (n<=1) ? 1 : Fb(n-1)+Fb(n-2);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cout<<Fb(n);
}
