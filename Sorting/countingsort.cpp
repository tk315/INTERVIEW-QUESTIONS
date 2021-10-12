#include<bits/stdc++.h>
using namespace std;
int countingsort(int a[],int n,int k){
int count1[k];
for(int i=0;i<k;i++){
    count1[i]=0;
}
for(int j=0;j<n;j++){
    count1[a[j]]++;
}
for(int s=1;s<k;s++){
    count1[s]=count1[s]+count1[s-1];
}
int ans[n];
for(int v=n-1;v>=0;v--){
    ans[count1[a[v]]-1]=a[v];
    count1[a[v]]--;
}
for(int d=0;d<n;d++){
    a[d]=ans[d];
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
int maxelement=a[0];
for(int j=1;j<n;j++){
    if(a[j]>maxelement)
        maxelement=a[j];
}
countingsort(a,n,maxelement+1);
cout<<"Sorted elements: ";
for(int t=0;t<n;t++){
    cout<<a[t]<<" ";
}
}
