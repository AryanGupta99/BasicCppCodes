
int arr[10];
for(int i=0;i<10;++i){
    cin>>arr[i];
}
int ans=0,sum=0;
for(int i=0;i<9;++i){

if(i%2==0){
    ans+=arr[i];
}
else{
    sum+=arr[i];
}
}
cout<<ans<<endl;
cout<<sum<<endl;

}