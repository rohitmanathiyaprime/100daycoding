#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int prime[n+1];
	for(int i=0;i<=n;i++){
		prime[i]=0;
		
	}
	for(int i=2;i<=n;i++){
		if(prime[i]==0){
			prime[i]++;
			
			for(int j=i*2;j<=n;j=j+i){
				prime[j]++;
			}
		}
	}
	int cnt=0;
	for(int i=2;i<=n;i++){
//		cout<<prime[i]<<" ";
		if(prime[i]==2){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
