#include <bits/stdc++.h>
using namespace std;
#include <string>
#define ll long long
#define x 1e7;
#define ONLINE_JUDGE                  \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);


int main(){
ONLINE_JUDGE
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    for(int i=0;i<s.size();++i){
    if(s[i]>='a' && s[i]<='z'){
        cout<<s[i]; 
    }
    else if(s[i]>='A' && s[i]<='Z'){
        if(i>0){
            s[i]=tolower(s[i]);
            cout<<"_"<<s[i];
        }
        else if(i==0){
            s[i]=tolower(s[i]);
            cout<<s[i];
        }
    }
}
    cout<<endl;

}
}