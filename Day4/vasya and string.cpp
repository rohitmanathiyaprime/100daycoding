#include<bits/stdc++.h>
using namespace std;
int n,k;
bool isgood(string s,int l){
	int a=0,b=0;
	for(int i=0;i<l;i++){
		if(s[i]=='a') a++;
		else b++;
	}
	int minval=min(a,b);
	if(minval<=k) return true;
	int i=0;
	int j=l-1;
	while(j<n){
		if(s[i]=='a'){
			a--;
		}
		else b--;
		if(s[j]=='a'){
			a++;
			
		}
		else b++;
		minval=min(a,b);
		if(minval<=k) return true;
		i++;
		j++;
	}
	return false;
}
int main(){
	 cin>>n>>k;
	string s;
	cin>>s;
	int l=1;
	int r=n;
	int res=0;
	while(l<=r){
		int mid=(l+r)/2;
		if(isgood(s,mid)){
			res=max(res,mid);
			l=mid+1;
		}
		else {
			r=mid-1;
		}
	}
	cout<<res;
	return 0;
	
}
