#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define pp pair
bool pal(ll n)
{
    string palin=to_string(n);
    ll low=0,high=palin.size()-1;
    while(high>low)
    {
    	if(palin[high]!=palin[low])
    		return false;
    	++low;
    	--high;
    }
    return true;
}
int main()
{
	int tt;
	tt=1;
	while(tt--)
	{
      ll n;
      cin>>n;
      while(n)
      {
      	if(n%10==0)
      		n/=10;
      	else 
      		break;
      }     
      if(pal(n))
      {
      	cout<<"Yes\n";
      }
      else 
      	cout<<"No\n";
	}
	return 0;
}