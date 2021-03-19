#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll int h,w,n;
bool maxlen(ll int l){
	return (l/h)*(l/w)>=n;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>h>>w>>n;
	ll int l=1;
	while(!maxlen(l)) l=l*2;
//	while(1){
//		if(maxlen(l)){
//			break;
//		}
//		l=l*2;
//	}
	ll int i,j;
	i=0;
	j=l;
	while(j>i+1){
		int mid=(i+j)/2;
		if(maxlen(mid)){
			j=mid;
		}
		else{
			i=mid;
		}
	}
	cout<<j;
	return 0;
	
}
