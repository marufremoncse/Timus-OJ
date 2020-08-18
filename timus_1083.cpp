#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int n, int k)
{
    int mult=1;
    for(int i=0;;i++)
    {
        if((n%k)==0)
        {
            mult = mult * (n-(i*k));
            if((n-(i*k))==k)
            {
                break;
            }
        }
        else if((n%k)!=0)
        {
            mult = mult * (n-(i*k));
            if((n-(i*k))==(n%k))
            {
                break;
            }
        }
    }
    return mult;
}
int main()
{
    int n;
    int count=0;
    char ch[21];
    int i=0;

    scanf("%d %s",&n,ch);

    for(int i=0;i<=20;i++)
    {
        if(ch[i]=='\0')
        {
            break;
        }
        count++;
    }
    int res = fact(n,count);
    cout<<res;
}
