#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int i=0; int j=0;
	while(j<n){
		if(a[j]!=0){
			a[i]=a[j];
			i++; j++;
		}
		else j++;
	}
	while(i<n){
		a[i]=0;
		i++;
	}
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}

// 10 0 1 -2 3 4 0 5 -27 9 0
