#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin>>n;
	vector<int> re;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			re.push_back(i);
		}
	}
	cout<<re.size()<<"\n";
	for(int i:re){
		cout<<i<<" ";
	}
	return 0;
}