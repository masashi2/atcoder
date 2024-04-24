#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q, t; cin>>n>>q;
    vector<int> v(n,1);

    for(int i=0;i<q;i++){
        cin>>t;
        if(v[t-1]==0){
            v[t-1]=1;
        }else{
            v[t-1]=0;
        }
    }
    int s=0;
    for(auto &nx: v){s+=nx;}
    cout<<s<<endl;
}