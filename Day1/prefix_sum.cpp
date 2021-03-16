#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	int prifix[n];
	prifix[0]=a[0];
	for(int i=1;i<n;i++){
		prifix[i]=prifix[i-1]+a[i];
	}
	int q; cin>>q;
	while(q--){
		int i,j;
		cin>>i>>j;
		if(i>0){
			cout<<prifix[j]-prifix[i-1];
		}
		else{
			cout<<prifix[j];
		}
		cout<<endl;
	}
	return 0;
}
