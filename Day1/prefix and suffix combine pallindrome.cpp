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
		
		int l=0;
		string res="";
		for(int i=0,j=n-1;i<j;i++,j--){
			if(s[i]!=s[j]){
				break;
			}
			else l++;
		}
		res=string(s,0,l);
		string str;
		int maxlen=-1;
		for(int i=l;i<n-l;i++){
			string temp=string(s,l,i-l+1);
			if(ispalin(temp)){
				if(maxlen<i-l+1){
					maxlen=i-l+1;
					str=temp;
				}
			}
		}
		for(int i=n-l-1;i>=l;i--){
			string temp=string(s,i,n-l-i);
			if(ispalin(temp)){
				if(maxlen<n-l-i){
					maxlen=n-l-i;
					str=temp;
				}
			}
		}
		res+=str;
		res+=string(s,n-l,l);
		cout<<res<<endl;
	}
	return 0;
}
