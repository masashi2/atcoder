#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    int num = stoi(s.substr(3,3));
    if(num>=1 && num<=349 && num!=316){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}