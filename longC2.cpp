#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin>>t;
	string sm="EQUINOX";
	while(t--){
		ll n,a,b;
		cin>>n>>a>>b;
		ll ma=0,mb=0;
		while(n--){
			string s;
			cin>>s;
			char e=s[0];
			size_t found = sm.find(e);
    		if (found != string::npos){
    			ma+=a;
    		}
    		else{
    			mb+=b;
    		}
		}
		if(ma>mb){
				cout<<"SARTHAK"<<"\n";
			}
		else if(ma<mb){
				cout<<"ANURADHA"<<"\n";
			}
		else if(ma==mb){
				cout<<"DRAW"<<"\n";
			}
	}
	return 0;
}