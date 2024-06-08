#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l,r;
    cin>>n>>l>>r;
    vector<int> v(n+1);
    for(int i=1;i<l;i++) v[i]=i;
    int k=r;
    for(int i=l;i<r+1;i++){
        v[i]=k;
        k--;
    }
    for(int i=r+1;i<n+1;i++){
        v[i]=i;
    }
    for(int i=1;i<n+1;i++){
        cout<<v[i]<<' ';
    }
    cout<<endl;
}