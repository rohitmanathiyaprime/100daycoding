#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin>>s;
	int r=0,g=0,b=0,y=0;
	
	map<char,int> m;
	for(int i=0;i<4;i++){
		int j=i;
		int cnt=0;
		char ch;
		while(j<s.length()){
			if(s[j]=='!'){
				cnt++;
			}
			else{
				ch=s[j];
				
			}
			j=j+4;
		}
		if(ch=='R'){
			r+=cnt;
		}
		if(ch=='G'){
			g+=cnt;
		}
		if(ch=='Y'){
			y+=cnt;
		}
		if(ch=='B'){
			b+=cnt;
		}
	}
	cout<<r<<" "<<b<<" "<<y<<" "<<g;
	
	return 0;
}

