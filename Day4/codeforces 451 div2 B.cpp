#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a,b; cin>>a>>b;
	int x=-1; int y=-1;
	for(int i=0;i<=n;i++){
		if((n-i*a)<0) break;
		if((n-i*a)%b==0){
			x=i;
			y=(n-i*a)/b;
			break;
		}
	}
	if(x==-1 || y==-1) cout<<"NO";
	else {
		cout<<"YES"<<endl<<x<<" "<<y;
	}
	return 0;
}
