#include<bits/stdc++.h>
using namespace std;

void printLCS(int dp[][1000],int n,int m,string &res,string a,string b){
	if(n==0 || m==0) return;
	if(a[n-1]==b[m-1]){
		res=res+a[n-1];
		printLCS(dp,n-1,m-1,res,a,b);
	}
	else{
		if(dp[n-1][m]>=dp[n][m-1]){
			printLCS(dp,n-1,m,res,a,b);
		}
		else{
			printLCS(dp,n,m-1,res,a,b);
		}
	}
}

int main(){
	string a,b;
	cin>>a>>b;
	int n=a.length();
	int	m=b.length();
	int dp[1000][1000];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
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
	printLCS(dp,n,m,res,a,b);
	cout<<res;
	return 0;
}
