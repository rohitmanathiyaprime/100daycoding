#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	string a,b; cin>>a>>b;
	int n=a.length();
	int m=b.length();
	ll dp[n+1][m+1];
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0 || j==0){
				dp[i][j]=0;
			}
			if(a[i]==b[j]){
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	cout<<dp[n][m];
	return 0;
}

