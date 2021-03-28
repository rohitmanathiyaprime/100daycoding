#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b; cin>>a>>b;
	int n=a.length();
	int m=b.length();
	int dp[n+1][m+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++)
		{
			if(i==0 || j==0){
				dp[i][j]=0;
			}
			else if(a[i-1]==b[j-1]){
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	cout<<dp[n][m];
	string res="";
	int i=n; int j=n;
	while(i>0 && j>0){
		if(a[i-1]==b[j-1]){
			res=res+a[i-1];
			i--; j--;
		}
		else{
			if(dp[i-1][j]>=dp[i][j-1]){
				res=res+a[i-1];
				i--;
			}
			else{
				res=res+b[j-1];
				j--;
			}
		}
	}
	while(i>0){
		res=res+a[i-1]; i--;
		
	}
	while(j>0){
		
		res=res+b[j-1];
		j--;
	}
	reverse(res.begin(),res.end());
	cout<<res;
	return 0;
}
