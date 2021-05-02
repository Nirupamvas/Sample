#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll a,b,c;
	cin>>a>>b>>c;
	if(a==b && b==c && c==a){
		cout<<"1";
	}
	else if(a==b && b==c || b==c && c==a || a==c && a==b){
		cout<<"2";
	}
	else if(a!=b && b!=c && c!=a){
		cout<<"3";
	}
	else{
		cout<<"-1";
	}
	return 0;
}