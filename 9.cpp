#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll a,b,c,s;
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	cout<<s<<"\n";
	float d=(s*abs(s-a)*abs(s-b)*abs(s-c));
	cout<<d;
	if(d>0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}