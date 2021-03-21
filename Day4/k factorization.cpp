#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n; int k; cin>>k;
	vector<int> factor;
	for(int i=2;i<n;i++){
		while(n%i==0){
			n=n/i;
			factor.push_back(i);
		}
	}
	if(factor.size()<k) cout<<-1;
	else{
		int i=0;
		while(i<k-1){
			cout<<factor[i]<<" ";
			i++;
		}
		int p=1;
		for(int i=k-1;i<factor.size();i++){
			p*=factor[i];
		}
		cout<<p;
	}
	return 0;
}
