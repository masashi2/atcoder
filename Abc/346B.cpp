#include<bits/stdc++.h>
using namespace std;

int main(){
    int w,b;
    cin>>w>>b;
    const string s = "wbwbwwbwbwbw";
    int nw, nb;
    for(int i=0;i<s.size();i++){
        nw=0, nb=0;
        for(int j=i;j<i+w+b;j++){
        if(s[j%s.size()]=='w') nw++;
        else nb++;
        }
        if(nw==w and nb==b){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}