#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n);
    cin>>v[0];
    for(int i=1;i<n;i++){
        cin>>v[i];
        if(v[i]>v[0]){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}