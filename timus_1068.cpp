#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int sum = 0;
    if(N>0)
    {
        for(int i=1;i<=N;i++)
        {
            sum = sum + i;
        }
    }
    else if(N<=0)
    {
        for(int i=N;i<=1;i++)
        {
            sum = sum + i;
        }
    }
    cout<<sum;
}
