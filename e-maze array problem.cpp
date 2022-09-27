
string s;
cin>>s;
int x=0 ,y=0;
for(int i=0;i<s.length();++i){
    if(s[i]=='L'){
        x-=1;
    }
    if(s[i]=='R'){
        x+=1;
    }
    if(s[i]=='D'){
        y-=1;
    }
    if(s[i]=='U'){
        y+=1;
    }
}
cout<<x<<" "<<y<<endl;

}