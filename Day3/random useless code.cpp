#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	if(n==0){
		cout<<m+1;
	}
	else{
		prifix[m+10];
		for(int i=0;i<m+10;i++){
			prifix[i]=0;
		}
		while(n>0){
			int a,b;
			cin>>a>>b;
			int l=a-b; int r=a+b;
			if(l<0) l=0;
			prifix[l]+=1;
			prifix[r+1]-=1;
		}
		int sum=0;
		for(int i=0;i<m+10;i++){
			prifix[i]=sum+prifix[i];
			sum=prifix[i];
		}
		int cnt=0;
		for(int i=0;i<m+2;i++){
			if(prifix[i]==1) cnt++;
		}
		cout<<cnt;
	}
	return 0;
}
