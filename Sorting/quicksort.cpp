#include<bits/stdc++.h>
using namespace std;
void swapp(int &a,int &b){
int temp;
temp=a;
a=b;
b=temp;
}
 int Partition(int a[],int l,int h){
int pivot=a[h];
int j=l;
for(int i=l;i<h;i++){
    if(a[i]<pivot){
        swapp(a[i],a[j]);
        j++;
    }
}
swapp(a[j],a[h]);
return j;
}
void quicksort(int a[],int l,int h){
if(h>l){
    int p=Partition(a,l,h);
    quicksort(a,l,p-1);
    quicksort(a,p+1,h);
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
quicksort(a,0,n-1);
cout<<"Sorted elements: ";
for(int j=0;j<n;j++){
    cout<<a[j]<<" ";
}
}
