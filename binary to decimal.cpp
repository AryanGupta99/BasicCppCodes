#include <bits/stdc++.h>
using namespace std;
#include <string>

#define ONLINE_JUDGE                  \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main(){
ONLINE_JUDGE
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    char s[n];

    for(int i=0;i<n;++i){
        cin>>s[i];
    }  
        long long int ans=1;
    long long int sum=0;
    for(int i=n-1;i>=0;i--){
        sum=sum+int(s[i]-48)*ans;
        ans=ans*2;

    }

    cout<<sum<<endl;
}
}