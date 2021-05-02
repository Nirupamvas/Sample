#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		cout<<floor(n/m)<<"\n";
	}
	return 0;
}