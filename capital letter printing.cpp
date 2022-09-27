#include <bits/stdc++.h>
using namespace std;
#include <string>

#define ONLINE_JUDGE                  \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);


int main(){
ONLINE_JUDGE
string s;
getline(cin,s);
for(int i=0;i<s.length();++i){
     if(s[i]>=97 && s[i]<=122)
      {
		s[i]=s[i]-32;
      }
    cout<<s[i];
    if(s[i]==' '){
        cout<<endl;
    }
    }
}


