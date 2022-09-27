#include <bits/stdc++.h>
using namespace std;
#include <string>
#define ll long long
#define ONLINE_JUDGE                  \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);


int main(){
ONLINE_JUDGE
long long t;
cin>>t;
while(t--){
    long long n,m;
    int sum=0;
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        for(int j=i;j>=1;--j){
            if(i%j==0 && j%2!=0){
                sum+=j;
                break;
            }
            
        }
}
cout<<sum%m<<endl;
}
return 0;
}