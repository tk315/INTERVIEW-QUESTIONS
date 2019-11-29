#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)//TIME COMPLEXITY IS O(N^2)
{
    for(int i=0;i<n-1;i++)//last element will already be sorted
    {
        int imin=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i]){imin=j;}
        }
        int temp=arr[i];
        arr[i]=arr[imin];
        arr[imin]=temp;
    }
}

int main()
{
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    selection_sort(arr,10);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

