#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string a,b; cin>>a>>b;
		int n=a.length();
		int m=b.length();
		int dp[n+1][m+1];
		int maxval=0;
		for(int i=0;i<=n;i++){
			for(int j=0;j<=m;j++){
				if(i==0 || j==0){
					dp[i][j]=0;
				}
				else if(a[i-1]==b[j-1]){
					dp[i][j]=dp[i-1][j-1]+1;
					maxval=max(maxval,dp[i][j]);
				}
				else{
					dp[i][j]=0;
				}
			}
		}
		int res=n-maxval+m-maxval;
//		cout<<maxval;
		cout<<res<<endl;
	}
	return 0;
}
