#include<bits/stdc++.h>
using namespace std;

bool ispalin(string s){
	int i=0; int j=s.length()-1;
	while(i<=j){
		if(s[i]!=s[j]){
			return false;
		}
		i++; j--;
	}
	return true;
}

int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		
		int n=s.length();
		int maxlen=-1;
		string res;
		vector<string> prefix(n);
		vector<string> suffix(n);
		for(int i=0;i<n;i++){
			string temp=string(s,0,i+1);
			prefix[i]=temp;
		}
		for(int i=n-1;i>=0;i--){
			string temp=string(s,i,n-i);
			suffix[i]=temp;
		}
		for(int i=0;i<n;i++){
			if(ispalin(prefix[i])){
				if(maxlen<i+1){
					maxlen=i+1;
					res=prefix[i];
				}
			}
			for(int j=n-1;j>i;j--){
				if(ispalin(suffix[j])){
					if(maxlen<n-j){
						maxlen=n-j;
						res=suffix[j];
					}
				}
				string temp=prefix[i]+suffix[j];
				if(ispalin(temp)){
					if(maxlen<n-j+i+1){
						maxlen=n-j+i+1;
						res=temp;
					}
				}
			}
			
		}
		cout<<res<<endl;
	}
	return 0;
}
