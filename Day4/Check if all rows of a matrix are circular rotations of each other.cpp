#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	string mstr="";
	for(int i=0;i<n;i++){
		char t='1'+a[0][i];
		mstr=mstr+t;
	}
	mstr=mstr+mstr;
	bool res=true;
	for(int i=1;i<n;i++){
		string temp="";
		for(int j=0;j<n;j++){
			char t='1'+a[i][j];
			temp=temp+t;
		}
		if(mstr.find(temp)==string::npos){
			res=false;
			break;
		}
	}
	if(res){
		cout<<"OK";
	}
	else cout<<"NOt ok";
	return 0;
}
