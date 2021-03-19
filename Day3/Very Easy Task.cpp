#include<bits/stdc++.h>
using namespace std;
int n,x,y;
bool isgood(int t){
	return (t/x)+(t/y)>=n;
}
int main(){
	
	cin>>n>>x>>y;
	int t=100;
	int i=0; int j=100;
	while(i+1<j){
		int mid=(i+j)/2;
		if(isgood(mid)){
			j=mid;
		
		} else{
			i=mid;
		}
	}
	cout<<j;
	return 0;
}
