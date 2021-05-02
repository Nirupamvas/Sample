#include<bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	ll q;
	cin>>q;
	ll ar[q];
	for(int i=0;i<q;i++){
		cin>>ar[i];
	}
	int sum=0;
	sum = accumulate(arr, arr+n, sum)%mod;
	for(int i=0;i<q;i++){
   		cout<<(sum*2)%<<"\n";
   		sum=(sum*2)%mod;
	}
	return 0;
}