#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int dp[n][n];
	dp[0][0]=a[0][0];
	for(int i=1;i<n;i++){
		dp[i][0]=dp[i-1][0]+a[i][0];
	}
	for(int j=1;j<n;j++){
		dp[0][j]=dp[0][j-1]+a[0][j];
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			dp[i][j]=dp[i-1][j]+dp[i][j-1]+a[i][j]-dp[i-1][j-1];
			
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<dp[i][j];
		}
		cout<<endl;
	}
	int q; cin>>q;
	while(q--){
		int c1,c2,r1,r2;
		cin>>c1>>r1>>c2>>r2;
		int res=dp[r2][c2];
		if(c1>0){
			res=res-dp[r2][c1-1];
		}
		if(r1>0){
			res=res-dp[r1-1][c2];
		}
		if(r1>0 && c1>0){
			res=res+dp[r1-1][c1-1];
		}
		cout<<res;
		cout<<endl;
	}
	return 0;
}
