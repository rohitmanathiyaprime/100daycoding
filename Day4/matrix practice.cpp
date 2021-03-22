#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define  mod 1000000007
#define fi first
#define se second
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
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

void solve(){
	int r,c; cin>>r>>c;
	int a[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	int k=0;
	// here for top row
	while(k<r/2){
	
		int pre=a[k][k];
		for(int i=k;i<c-k;i++){
			int temp=pre;
			pre=a[k][i];
			a[k][i]=temp;
			cout<<temp<<" ";
			
		}
		for(int i=k+1;i<r-k;i++){
			int temp=pre;
			pre=a[i][c-k-1];
			a[i][c-k-1]=temp;
		}
		for(int i=c-2-k;i>=k;i--){
			int temp=pre;
			pre=a[r-1-k][i];
			a[r-1-k][i]=temp;
		}
		for(int i=r-2-k;i>=k;i--){
			int temp=pre;
			pre=a[i][k];
			a[i][k]=temp;
		}
		k++;
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
//	while()
}

int main(){
	IOS
	
	solve();
	
	return 0;
	
}
