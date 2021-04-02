#include<bits/stdc++.h>
using namespace std; 
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a[n];
        map<int,int> m;
        int maxfre=0;
        int num;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
            if(maxfre<m[a[i]]){
                maxfre=m[a[i]];
                num=a[i];
            }
        }
        map<int,int> :: iterator it=m.begin();
        while(it!=m.end()){
            if(it->first!=num){
                maxfre-=it->second;
            }
            it++;
        }
        if(maxfre<0) maxfre=0;
        cout<<maxfre;
        cout<<endl;
        
        
    }
    return 0;
}
