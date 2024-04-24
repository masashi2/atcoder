#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<vector<int> > v(n, vector<int>(2));
    for(int i=0;i<n;i++){
        cin>>v[i][0]>>v[i][1];
    }
    for(int i=0;i<n;i++){
        int p=0;
        double maxd=0, d;
        for(int j=0;j<n;j++){
            if(j!=i){
                d = sqrt((v[i][0]-v[j][0])*(v[i][0]-v[j][0])+(v[i][1]-v[j][1])*(v[i][1]-v[j][1]));
                if(d > maxd){
                maxd = d;
                p = j;
                }
            }
        }
        cout<<p+1<<'\n';
    }
    cout<<endl;
}