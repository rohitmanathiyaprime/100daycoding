#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin>>s;
	int k; cin>>k;
	int n=s.length();
        map<string,int> m;
        int i=0;
        string temp="";
        while(i<k && i<n){
            temp+=s[i];
            i++;
        }
        m[temp]++;
        int l=1;
        int r=i;
        while(r<n){
            string t=string(s,l,k);
            m[t]++;
            r++;
            l++;
        }
        int total=pow(2,k);
        int cnt=0;
        map<string,int> :: iterator it=m.begin();
        while(it!=m.end()){
            it++; cnt++;
        }
        if(total==cnt) cout<<"YES"; else cout<<"NO";
        return 0;
}
