#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n)
{   
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag++;
            }
        }
        if(flag==0)
        {
            break;
        }
        cout<<"After "<<i+1<<" pass:- ";
        for(int k=0;k<n;k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,n);
    return 0;
}
