#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define  mod 1000000007
#define fi first
#define se second

#define len 10000001
#define ps 10000
using namespace std;

ll int pow(ll int a,ll int b){
	if(b==1) return 1;
	ll int k=1;
	while(b){
		if(b&1){
			k=(k*a)%mod;
			
		}
		a=(a*a)%mod;
		b=b>>1;
	}
	return k;
}

void solve(ll int test){
	cout<<"Case #"<<test<<": ";
	ll int n,k; cin>>n>>k;
	string s; cin>>s;
	int cnt=0;
	for(ll int i=0;i<s.length()/2;i++){
		if(s[i]!=s[n-i-1]){
			cnt++;
		}
	}
	cout<<abs(cnt-k);
	cout<<"\n";
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int T; cin>>T;
	ll int k=0;
	while(T--){
		
		
		solve(k);
		k++;
	}
	
	return 0;
	
}
