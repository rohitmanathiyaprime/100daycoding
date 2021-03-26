#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
	ll int T; cin>>T;
	while(T--){
		ll int n,k; cin>>n>>k;
		int res=0;
		string s; cin>>s;
		ll int l=s.length();
		for(int i=0;i<l;i++){
			if(s[i]=='*'){
				s[i]='x';
				res++;
				break;
				
			}
		}
		for(int i=l-1;i>=0;i--){
			if(s[i]=='*'){
				s[i]='x';
				res++; break;
			}
		}
		int i=0; int j=0;
		int cntx=0;
		int cntst=0;
		while(s[j]!='x'){
			j++;
		}
		int t=j;
		while(j<=k+t && j<n){
			if(s[j]=='*') cntst++;
			if(s[j]=='x') cntx++;
			j++;
		}
		i=t;
		if(cntx==1 && cntst>0 && j==k+t+1){
			for(int p=j-1;p>=i;p--){
				if(s[p]=='*'){
					s[p]='x';
					t=p;
					cntx++; cntst--;
					res++;
					break;
				}
			}
		}
		j=t;
		cout<<res<<j;
		cout<<"Ok";
		while(j<n){
			cntx=0;
			cntst=0;
			while(j<=k+t && j<n){
				if(s[j]=='*') cntst++;
				if(s[j]=='x') cntx++;
				j++;
			}
			
			cout<<j;
			if(j>=n) break;
			if(cntx==1 && cntst>0 && j==k+t+1){
				for(int p=j-1;p>=t;p--){
					if(s[p]=='*'){
						s[p]='x';
						t=p;
						cntx++; cntst--;
						res++;
						break;
					}
				}
				cout<<"this is fun";
				j=t;
			}
			else{
				t=j-1;
				j=t;
			}
			
			
		}
		cout<<res;
		cout<<endl;
	}
	return 0;
}
