#include<bits/stdc++.h>
using namespace std;
int power(int a,int n,int p){
	a=a%p;
	int res=1;
	while(n>0){
		if(n%1){
			res=a*res;
		}
		n=n>>1;
		a=a*a%p;
	}
	
}
int main(){
	int a,n,p; cin>>a>>n>>p;
	
}
