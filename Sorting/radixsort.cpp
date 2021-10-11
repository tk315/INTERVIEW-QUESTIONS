#include<bits/stdc++.h>
using namespace std;
int countsort(int a[],int n,int exp){
int count1[10];
for(int i=0;i<10;i++){
    count1[i]=0;
}
for(int j=0;j<n;j++){
    count1[(a[j]/exp)%10]++;
}
for(int k=1;k<10;k++){
    count1[k]=count1[k]+count1[k-1];
}
int ans[n];
for(int s=n-1;s>=0;s--){
    ans[count1[(a[s]/exp)%10]-1]=a[s];
    count1[(a[s]/exp)%10]--;
}
for(int v=0;v<n;v++){
    a[v]=ans[v];
}
}
int radixsort(int a[],int n){
    int maxx=a[0];
for(int i=1;i<n;i++){
    if(maxx<a[i])
        maxx=a[i];
}
for(int exp=1;maxx/exp>0;exp=exp*10){
    countsort(a,n,exp);
}
return 0;
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
radixsort(a,n);
cout<<"Sorted elements: ";
for(int j=0;j<n;j++){
    cout<<a[j]<<" ";
}
}
