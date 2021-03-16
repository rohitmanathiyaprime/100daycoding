#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		int prefix[n];
		prefix[0]=a[0];
		for(int i=1;i<n;i++){
			if(a[i]!=-1){
				prefix[i]=a[i]+prefix[i-1];
			}
			else if(a[i]==-1){
				a[i]=prefix[i-1]/(i);
				prefix[i]=prefix[i-1]+prefix[i-1]/(i);
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
