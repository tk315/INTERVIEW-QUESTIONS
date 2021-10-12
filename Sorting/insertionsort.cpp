#include<bits/stdc++.h>
using namespace std;
void insertionsort(int a[],int n){
for(int i=1;i<n;i++){
    int key=a[i];
    int j=i-1;
    while(a[j]>key&&j>=0){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;
}
}
int main(){
int n;
cout<<"Enter no. of elements: ";
cin>>n;
int a[n];
cout<<"Enter elements: ";
for(int i=0;i<n;i++){
    cin>>a[i];
}
insertionsort(a,n);
cout<<"Sorted elements: ";
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}
