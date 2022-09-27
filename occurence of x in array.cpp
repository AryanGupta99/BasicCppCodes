#include <bits/stdc++.h>
using namespace std;
#include <string>

#define ONLINE_JUDGE                  \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
int main()
{
ONLINE_JUDGE

int n,x;
cin>>n>>x;
int arr[n];
for(int i=0;i<n;++i){
    cin>>arr[i];
}
int count=0;

for(int i=0;i<n;++i){
    if(arr[i]==x){
    
        count++;
    }
}
cout<<count;
}  
