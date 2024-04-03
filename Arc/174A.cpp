#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c;
    cin>>n>>c;
    vector<long long> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    long long ans=0,sum,max,min;

    for(int i=0;i<n;i++){
        ans+=v[i];
    }
    //ArからAlをC>1のとき最大化、C<1のとき最小化するとAの総和が最大化される
    if(c>1){
        max=-pow(10, 12);
        for(int i=0;i<=n;i++){
            for(int j=i;j<=n;j++){
                sum=0;
                for(int k=i;k<=j;k++){
                    sum+=v[k];
                }
                if(sum>max) max=sum;
            }
        }
        ans+=(c-1)*max;
        cout<<ans<<endl;
    }else if(c<1){
        min=pow(10, 12);
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                sum=0;
                for(int k=i;k<=j;k++){
                    sum+=v[k];
                }
                if(sum<min) min=sum;
            }
        }
        ans+=(c-1)*min;
        cout<<ans<<endl;
    }else{
        cout<<ans<<endl;
    }
}