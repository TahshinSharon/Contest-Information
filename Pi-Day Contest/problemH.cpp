#include<cstdio>
#include<algorithm>
using namespace std;
int n,i,a[100050],f[100050];
int main()
{
scanf("%d",&n);
for(i=1;i<=n;i++){
scanf("%d",a+i);
f[i]=min(f[i-1]+20,min(f[upper_bound(a+1,a+i,a[i]-90)-a-1]+50,f[upper_bound(a+1,a+i,a[i]-1440)-a-1]+120));
printf("%d\n",f[i]-f[i-1]);
}
return 0;
}
