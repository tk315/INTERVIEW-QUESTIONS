#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int *arr,int beg_index,int end_index,int ele)
{
    int i=0;
    int mid_index;
    mid_index=(beg_index+end_index)/2;
    while(end_index>=beg_index)
    {
        if(arr[mid_index]==ele)
        {
            return mid_index;
        }
        if(arr[mid_index]>ele)
        {
            end_index=mid_index-1;
            mid_index=(beg_index+end_index)/2;
            continue;
        }
        else if(arr[mid_index]<ele)
        {
            beg_index=mid_index+1;
            mid_index=(beg_index+end_index)/2;
            continue;
        }
        return beg_index;
    }
    return -1;

}
int main()
{
    int arr[]={2,3,4,5,8,10,17,20,24,30};
    int element,result;
    cout<<"Enter the element you want to search : ";
    cin>>element;
    result=BinarySearch(arr,0,9,element);
    if(result>=0)
        cout<<"Element found at index "<<result<<endl;
    else
        cout<<"Element not found";

}
