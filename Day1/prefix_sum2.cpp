#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll int t; cin>>t;
	while(t--){
		ll int n; cin>>n;
		ll int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		ll int prefix[n];
		prefix[0]=a[0];
		for(int i=1;i<n;i++){
			if(a[i]!=-1){
				prefix[i]=a[i]+prefix[i-1];
			}
			else if(a[i]==-1){
				a[i]=prefix[i-1]/(i);
				prefix[i]=prefix[i-1]+prefix[i-1]/(i);
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
