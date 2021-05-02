#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<ll> val;
vector<ll> cou;
int countFreq(ll arr[], ll n)
{
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        if (visited[i] == true)
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        if(count !=1){
        	if(count%2==0){
        		val.push_back(arr[i]);
        		cou.push_back(count);
        	}
        	else{
        		val.push_back(arr[i]);
        		cou.push_back(count-1);
        	}
    	}
    }
    return 0;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
		ll n,w,wr;
		cin>>n>>w>>wr;
		ll arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(wr>=w){
			cout<<"YES"<<"\n";
		}
		else{
			int sum=0;
			for(int i=0;i<n;i++){
				if(arr[i]==1){
					sum+=1;
				}
			}
			if(sum%2==0){
				if(sum+wr>=w){
					cout<<"YES"<<"\n";
				}
				else{
					cout<<"NO"<<"\n";
				}
			}
			else{
				int k=countFreq(arr,n);
				for(int i=0;i<val.size();i++){
					cout<<val[i]<<" "<<cou[i]<<"\n";
				}
			}
		}
	}
	return 0;
}