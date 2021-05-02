#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin>>t;
	cout<<"asdfa";
	while(t--){
		ll l;
		cin>>l;
		char s[l];
		cin>>s;
		ll k=0,t=0;
		for(int i=0;i<l;i++){
			if(strcmp(s[i],'1')==0){
				k+=1;
				int o=(k*100/i+1);
				if(o>=50){
					t=1;
					break;
				}
			}
		}
		if(t==1){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}