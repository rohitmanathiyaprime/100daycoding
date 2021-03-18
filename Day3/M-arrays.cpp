#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	ll int t; cin>>t;
	while(t--){
		ll int n,m; cin>>n>>m;
		ll int a[n];
		map<int,int> mpp;
		ll int cnt=0;
		vector<int> v;
		for(ll int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%m==0){
				cnt=1;
			}
			else{
				ll int k=a[i]%m;
				v.push_back(k);
				mpp[k]++;
			}
		}
		for(int i=0;i<v.size();i++){
			if(mpp[v[i]]>0){
				cnt++;
				ll int k=1;
				bool isok=true;
				
				while(1){
					if(k==1){
						if(mpp[v[i]]>0){
							mpp[v[i]]--;
						}
						else{
							isok=false;
						}
						k=2;
						if(isok==false) break;
					}
					if(k==2){
						int p=m-v[i];
						if(mpp[p]>0){
							mpp[p]--;
						}
						else {
							isok=false;
						}
						k=1;
						if(isok==false) break;
					}
					if(isok==false) break;
				}
			}
		}
		cout<<cnt<<endl;
		
	}
	return 0;
}
