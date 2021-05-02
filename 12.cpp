#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin>>n;
	ll odd=0,eve=0;
	for(ll i=1;i<=2*n;i++){
		if(i%2==0){
			eve+=i;
		}
		else{
			odd+=i;
		}
	}
	cout<<odd<<" "<<eve;
	return 0;
}