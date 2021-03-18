#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		
	
	int n,k; cin>>n>>k;
	vector<int> res;
	while(k>3){
		res.push_back(1);
		n--;
		k--;
	}
	if(n%2!=0){
		res.push_back(n/2);
		res.push_back(n/2);
		res.push_back(1);
	}
	else if(n%4==0){
		res.push_back(n/2); res.push_back(n/4); res.push_back(n/4);
	}
	else{
		res.push_back(n/2-1); res.push_back(n/2-1); res.push_back(2);
	}
	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
	cout<<endl;
}
	return 0;
}
