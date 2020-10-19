//moore's voting algo
//find the majority element which occurs more than floor(n/2) times
#include<bits/stdc++.h>
using namespace std;

//it will give majority index for sure if array has majority element
//if array does not have majority element it is not necessary it will give most frequent element
int findmajidx(vector <int> &arr)
{
    int majidx=0,cnt=1;
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]==arr[majidx])cnt++;
        else cnt--;
        if(cnt==0){majidx=i,cnt=1;}
    }
    return majidx;
}

int main()
{
    vector <int> arr={4,5,4,4,1,4,3,4,4};
    int n=arr.size();
    int majidx=findmajidx(arr);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[majidx])cnt++;
    }
    if(cnt>(n/2))cout<<arr[majidx]<<endl;
    else cout<<"no majority element"<<endl;
    return 0;
}