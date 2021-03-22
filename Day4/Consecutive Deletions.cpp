#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll int t; cin>>t;
	while(t--){
		ll int n,m,k;
		cin>>n>>m>>k;
		ll int res=0;
		if(n%2==0 || m%2==0){
			int temp=k+2;
			res=res^temp;
			temp=n+m+k;
			res=res^temp;
			
		}
		else if(n==1 || m==1){
			int maxval=max(n,m);
			for(ll int i=1;i<=maxval;i++){
				res=res^(k+1+i);
			}
		}
		else if(n%2!=0 && m%2!=0){
			res=res^(k+2);
			ll int small=min(n,m);
			ll int big=max(n,m);
			for(int i=3;i<=small;i=i+2){
				res=res^(k+1+i);
			}
			for(int i=2;i<=big-2;i++){
				res=res^(k+small+i);
			}
			res=res^(n+m+k);
		}
		cout<<res<<endl;
	}
	return 0;
}
