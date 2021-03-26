#include<bits/stdc++.h>
using namespace std;

int LCDRecur(string a,string b,int n, int m){
	if(n==0 || m==0) return 0;
	if(a[n-1]==b[m-1]){
		return LCDRecur(a,b,n-1,m-1)+1;
	}
	return max(LCDRecur(a,b,n-1,m),LCDRecur(a,b,n,m-1));
}

int main(){
	string a,b;
	cin>>a>>b;
	int n=a.length();
	int m=b.length();
	int res=LCDRecur(a,b,n,m);
	cout<<res;
	return 0;
}
