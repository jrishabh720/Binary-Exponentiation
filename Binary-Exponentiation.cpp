#include<bits/stdc++.h>
#define ll long long
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<" ";
#define n() cout<<endl;
#define inp(x) cin>>x;
#define pa(a,n) for(ll i=0;i<n;i++)cout<<a[i]<<" ";
#define ll long long
using namespace std;

// ll power(ll n,ll p){
// 	ll ans = 1;
// 	while(p--){
// 		ans *= n;
// 	}
// 	return ans;
// }
ll power(ll n,ll p) {
    if (p == 0)
        return 1;
    ll res = power(n, p / 2);
    if (p % 2)
        return res * res * n;
    else
        return res * res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,p;
	inp(n);inp(p);
	pn(power(n,p));
	return 0;
}
