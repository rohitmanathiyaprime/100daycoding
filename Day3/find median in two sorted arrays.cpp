#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int m; cin>>m;
	int b[m];
	for(int i=0;i<m;i++) cin>>b[i];
	int i=0; int size=n+m;
	int j=0;
	if(size%2!=0){
		int k=size/2-1;
		int num;
		while(i<n && j<m && k>0){
			if(a[i]<b[j]){
				i++;
			}
			else{
				j++;
			}
			k--;
		}
		cout<<k<<i<<j;
		if(k!=0){
			while(i<n && k>0){
				i++;
				k--;
			}
			while(j<m && k>0){
				j++;
				k--;
			}
		}
		
		int res=min(a[i],b[j]);
		cout<<res;
		
	}
	return 0;
	
}
// 5 -5 3 6 12 15 6 -12 -10 -6 -3 4 10
