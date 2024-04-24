#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,c;
    cin>>n;
    map<int, int> mp;
    for(int i=0;i<n;i++){
        cin>>a>>c;
        if(mp.count(c)){ //containsで可能
            mp[c] = min(mp[c], a);
        }else{
            mp[c] = a;
        }
    }
    int ans = 1;
    for(auto [c, val] : mp){
        ans = max(ans, val);
    }
    cout<<ans<<endl;
}