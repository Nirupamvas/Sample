#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin>>n;
	if(n%5==0 || n%6==0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}