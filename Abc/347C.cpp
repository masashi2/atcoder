#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    ll a,b;
    cin>>n>>a>>b;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v[i]%=(a+b);//1週間の何日目か
    }
    sort(v.begin(), v.end());
    v.push_back(v[0]+a+b);
    
    //b日間だけ予定が無ければok
    for(int i=0;i<n+1;i++){
        if(v[i+1]-v[i]>b){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;    
}