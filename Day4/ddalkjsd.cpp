#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; scanf("%d",t);
	while(t--){
		int k=1;
		bool wegot=false;
		while(1){
			int n; scanf("&d",n);
			
			int q;
			scanf("%d",q);
			if(q==1){
				printf("%d/n",n);
				fflush(stdout);
				wegot=true;
			}
			else if(q==-1){
				break;
			}
		}
		if(wegot==false){
			break;
		}
		
	}
	return 0;
}
