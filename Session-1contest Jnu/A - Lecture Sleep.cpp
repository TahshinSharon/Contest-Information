    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,k,ar[100005],t[100005],x=0;
    	cin>>n>>k;
     for(int i=1;i<=n;i++){
         cin>>ar[i];
     }
     int m=0,add=0;
     for(int i=1;i<=n;i++)
     {
      cin>>t[i];
      if(t[i]==1){
          x=x+ar[i];
      }
      else add=add+ar[i];
      if(i-k>0 && t[i-k]==0){
          add=add-ar[i-k];
      }
      m=max(add,m);
     }
     int res=x+m;
     cout<<res<<endl;
     return 0;
    }