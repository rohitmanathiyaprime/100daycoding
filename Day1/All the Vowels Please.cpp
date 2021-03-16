#include<bits/stdc++.h>
using namespace std; 
int main(){
	
		int n; cin>>n;
		if(n<25){
			cout<<-1;
		}
		else{
			int a=0,b=0;
			for(int i=5;i<n;i++){
//				cout<<"this is /runnning";
				if(n%i==0){
					int div=n/i;
					if(div>=5){
						a=i; b=div;
//						cout<<"this is running";
					}
				}
				if(a!=0 && b!=0) break;
			}
			if(a==0 || b==0) cout<<-1;
			else{
				string vowel="aeiou";
				int index=0;
				for(int i=0;i<a;i++){
					index=i%5;
					
					for(int j=0;j<b;j++){
						cout<<vowel[index];
						index++;
						index=index%5;
					}
				}
			}	
			
		}
	
	return 0;
}
