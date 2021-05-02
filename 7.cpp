#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n,k;
	cin>>n>>k;
	ll arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int d=0;
	for(int i=0;i<n;i++){
		if(arr[i]==k){
			d=1;
			break;
		}
	}
	if(d==1){
		cout<<1;
	}
	else{
		cout<<-1;
	}
	return 0;
}