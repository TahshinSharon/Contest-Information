#include<bits/stdc++.h>
using namespace std;
#include<stdio.h>

int main()
{
    long int  a[12],t,n, i,j, mod,m,k,l;
    while(scanf("%ld", &t)==1)
    {
        for(i=1;i<=t;i++)
        {
            for(l=0;l<10;l++)
                a[l]=0;
            scanf("%ld",&n);
            for(j=1;j<=n;j++)
            {
                m=j;
                while(m!=0)
                {
                    mod=m%10;
                    m=m/10;
                    a[mod]+=1;
                }
            }
            for(k=0;k<10;k++)
            {
                if(k<9)
                    printf("%ld ",a[k]);
                else
                    printf("%ld\n",a[k]);
            }

        }
    }
    return 0;
}
