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
		int n; cin>>n;
		bool isfind=false;
		bool isok=false;
		for(int i=n;i>0;i=i/10){
			int k=i%10;
			if(k==1){
				isfind=true;
			}
			else if(k==2 && isfind==true){
				isok=true;
				break;
			}
			else if(isfind==true && k!=2){
				isfind=false;
			}
		}
		if(n%21==0) isok=true;
		if(isok) cout<<"The streak is broken!";
		else cout<<"The streak lives still in our heart!";
		cout<<endl;
	}
	return 0;
}
