#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

int main()
{
    int A, B;
    scanf("%d%d",&A,&B);
    printf("%d %d",(A+B)-A-1,(A+B)-B-1);
