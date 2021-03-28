#include<bits/stdc++.h>
#define  ll long long 
using namespace std;
int main(){
	int n; cin>>n;
	int dp[n][n];
	int k=0;
	for(int i=0;i<n;i++){
		dp[0][i]=k;
		k+=4;
	}
	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			dp[j][i]=dp[j-1][i]+6;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

