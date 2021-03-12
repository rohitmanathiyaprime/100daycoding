/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main(){
	int T; cin>>T;
	while(T--){
		string s; cin>>s;
		string a="SUVO";
		string b="JIT";
		int i=0;
		
		int cnt1=0,cnt2=0;
		
		while(i<s.length()){
			int j=0;
			bool isfind=false;
			int l=i;
			if(s[l]==a[j]){
				while(j<a.length() && l<s.length()){
					if(s[l]!=a[j]){
						
						break;
					}
					j++; l++;
				}
				if(j==a.length()){
					cnt1++;
					i=l;
					isfind=true;
				}
				j=0;
				if(s[l]==b[j] && isfind){
					while(j<b.length() && l<s.length()){
						if(s[l]!=b[j]){
							break;
						}
						l++;
						j++;
					}
					if(j==b.length()){
						cnt2++;
						cnt1--;
						i=l;
						cout<<i;
					}
				}
				
			}
			if(isfind==false) i++;
		}
		cout<<"SUVO = "<<cnt1<<", SUVOJIT = "<<cnt2;
		cout<<endl;
	}
	return 0;
}

