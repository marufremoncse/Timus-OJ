#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[200000]={0};

    for(int i=2;i<=sqrt(200000);i++)
    {
        for(int j=i*i;j<=200000;j+=i)
        {
            ara[j]=1;
        }
    }
    int res[1500]={0};
    int count=1;
    for(int i=2;i<=200000;i++)
    {
        if(ara[i]==0)
        {
            res[count]=i;
            count++;
        }
    }
    int n;
    scanf("%d",&n);
    while(n)
    {
        int c;
        scanf("%d",&c);
        printf("%d\n",res[c]);
        n--;
    }
}
