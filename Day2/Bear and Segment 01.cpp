#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t; 
	while(t--){
		string s; cin>>s;
		int isok=false;
		int i=0;
		while(i<s.length()){
			if(s[i]=='1' && isok==false){
				isok=true;
				int j=i;
				while(j<s.length() && s[j]=='1'){
					j++;
//					cout<<j;
				}
				i=j;
				
			}
			else if(s[i]=='1' && isok==true){
				isok=false;
//				cout<<"this is runnning";
				break;
			}
			else i++;
			
		}
		if(isok) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
	return 0;
}
