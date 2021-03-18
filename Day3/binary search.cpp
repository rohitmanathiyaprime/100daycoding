#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int k; cin>>k;
	int i=0; int j=n-1;
	while(i<j){
		int mid=(i+j)/2;
		if(k==a[mid]) {
			cout<<mid<<" "<<k;
			break;
		}
		if(a[mid]>k){
			j=mid-1;
		}
		else{
			i=mid;
		}
	}
	cout<<i<<" "<<a[i];
	return 0;
}
