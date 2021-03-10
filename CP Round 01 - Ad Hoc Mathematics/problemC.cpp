#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N[100],i,j,s=0;
    for(i=0;i<100;i++)
    {
        cin>>N[i];
        if(N[i]==0)
        {
            break;
        }
    }
    cout<<"PERFECTION OUTPUT"<<endl;
    for(i=0;i<100;i++)
    {
        if(N[i]==0)
        {
            cout<<"END OF OUTPUT"<<endl;
            break;
        }
        for(j=1;j<N[i];j++)
        {
            if((N[i]%j)==0)
            {
                s=s+j;
            }
        }
        if(s==N[i])
        {
            printf("%5d  PERFECT\n",N[i]);
        }
        else if(s<N[i])
        {
            printf("%5d  DEFICIENT\n",N[i]);
        }
        else if(s>N[i])
        {
            printf("%5d  ABUNDANT\n",N[i]);
        }
        s=0;
    }
    return 0;
}
