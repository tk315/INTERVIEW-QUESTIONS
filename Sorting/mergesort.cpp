#include<bits/stdc++.h>
#define int long long
using namespace std;
void merge1(int a[],int l,int m,int r){
int n1=m-l+1;
int n2=r-m;
int left[n1],right[n2];
for(int i=0;i<n1;i++){
    left[i]=a[l+i];
}
cout<<sizeof(left)<<endl;
for(int j=0;j<n2;j++){
    right[j]=a[m+j+1];
}
int i=0;
int j=0;
int k=l;
while(i<n1 && j<n2){
    if(left[i]<=right[j]){
        a[k]=left[i];
        i++;
       }
    else{
        a[k]=right[j];
        j++;
    }
       k++;
}
while(i<n1){
    a[k]=left[i];
    k++;
    i++;
}
while(j<n2){
    a[k]=right[j];
    k++;
    j++;
}
}
void mergesort(int a[],int l,int r){

if(r>l){
        int m=l+(r-l)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge1(a,l,m,r);
}
}

int32_t main(){
int n;
cout<<"Enter no. of elements: ";
cin>>n;
int a[n];
cout<<"Enter elements: ";
for(int i=0;i<n;i++){
    cin>>a[i];
}
mergesort(a,0,n-1);

cout<<"Sorted elements: ";
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}
