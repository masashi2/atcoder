#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int cnt=0, rest=k;
    for(int i=0;i<n;i++){
        if(rest<v[i]){
            cnt++;
            rest=k;
            rest-=v[i];
        }else{
            rest-=v[i];
        }
    }
    cnt++;
    cout<<cnt<<endl;
}