#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    int ara[101];
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>ara[i];
    }
    for(int i=0;i<k-1;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(ara[i]>ara[j])
            {
                int temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }
    }
    int count=0;
    for(int i=0;i<(k/2)+1;i++)
    {
        count=count+(ara[i]/2+1);
    }
    cout<<count;
}
