#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i=0;i<n;i++){
        if((i+1)%3==0)cout<<'x';
        else cout<<'o';
    }
    cout<<endl;
}