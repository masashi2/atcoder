#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    if(s[0]!=s[1]){
        if(s[0]==s[2]) cout<<2<<endl;
        else cout<<1<<endl;
        return 0;
    }else{
        for(int i=2;i<s.size();i++){
            if(s[i]!=s[0])cout<<i+1<<endl;
        }
    }
}