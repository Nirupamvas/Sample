#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll l,r;
	cin>>l>>r;
	vector<int> v;
	for(int i=l;i<=r;i++){
		if(i%2!=0)
			v.push_back(i);
	}
	sort(v.begin(),v.end());
	for(int k : v){
		cout<<k<<" ";
	}
	return 0;
}