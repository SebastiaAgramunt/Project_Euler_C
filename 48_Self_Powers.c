#include "stdio.h"

long long power(int a,long long mod);
 
int main()
{
    int i;
    long long ans=0;
    long long mod = 10000000000;
     
    for(i=1; i<=1000; i++)
    {
        ans=(ans+power(i,mod))%mod;
    }
     
    ans=(ans%mod);
    printf("%lld\n",ans);
     
    return 0;
}
 
long long power(int a, long long mod)
{
    int i;
    long long ans=1;
    for(i=1; i<=a; i++)
    {
        ans*=a;
        ans=ans%mod;
    }
    return ans;
}