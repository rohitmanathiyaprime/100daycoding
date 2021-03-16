#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int x=a[n-1];
	for(int i=1;i<n;i++){
		if(a[i]!=0 && x%a[i]==0){
			a[i]=0;
		}
	}
	int y=0;
	for(int i=0;i<n;i++){
		y=max(y,a[i]);
	}
	cout<<x<<" "<<y<<endl;
	return 0;
	
}
