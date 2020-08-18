#include<bits/stdc++.h>
using namespace std;


int binarySearch(int ara[], int k, int ara_size){
    int min = 0;
    int max = ara_size -1;
    int mid;

    while(min<=max){
        mid = (max+min)/2;
        if(ara[mid]==k)
            return 1;
        else if(ara[mid]<k)
            min = mid + 1;
        else
            max = mid - 1;
    }
    return 0;
}
int main()
{
    int ones_indexes[65536];
    unsigned int ones_index;
    int i;
    for(i=0,ones_index=1;ones_index<=2147483647;i++,ones_index+=i){
        ones_indexes[i] = ones_index;
    }

    int N,k;
    cin>>N;
    int res[65536];
    for(int j=0;j<N;j++){
        cin>>k;
        res[j] = binarySearch(ones_indexes,k,65536);
    }
    for(int j=0;j<N;j++){
        cout<<res[j]<<" ";
    }
}

