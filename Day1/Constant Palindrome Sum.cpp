#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int prefix[2*k+2];
		for(int i=0;i<=2*k+1;i++){
			prefix[i]=0;
		}
		vector<pair<int,int> > v(n/2);
		for(int i=0;i<n/2;i++){
			v[i]={min(a[i],a[n-i-1]),max(a[i],a[n-i-1])};
		}
		map<int,int> m;
		for(int i=0;i<n/2;i++){
			int l=v[i].first+1;
			int r=v[i].second+k;
			m[v[i].first+v[i].second]++;
			prefix[l]+=1;
			prefix[r+1]-=1;
			
		}
		int sum=0;
		for(int i=0;i<=2*k+1;i++){
			prefix[i]=sum+prefix[i];
//			cout<<prefix[i]<<" ";
			sum=prefix[i];
		}
		int minval=INT_MAX;
		for(int i=0;i<2*k+1;i++){
			int cnt1=m[i];
			int cnt2=prefix[i]-cnt1;
			int cnt3=n/2-cnt1-cnt2;
			int cnt=cnt2+2*cnt3;
			minval=min(cnt,minval);
		}
		cout<<minval<<endl;
	}
	return 0;
}
