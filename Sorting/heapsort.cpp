#include<bits/stdc++.h>
using namespace std;
int swapp(int &c,int &d){
int temp;
temp=c;
c=d;
d=temp;
}
int heapify(int a[],int n,int i){
int large=i;
int l=2*i+1;
int r=2*i+2;
if(l<n&&a[l]>a[large]){
    large=l;
}
if(r<n&&a[r]>a[large]){
    large=r;
}
if(large!=i){
    swapp(a[large],a[i]);
    heapify(a,n,large);
}
}
int heapsort(int a[],int n){
for(int i=n/2-1;i>=0;i--){
    heapify(a,n,i);
}
for(int j=n-1;j>0;j--){
    swapp(a[j],a[0]);
    heapify(a,j,0);
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
heapsort(a,n);
cout<<"Sorted elements: ";
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}
