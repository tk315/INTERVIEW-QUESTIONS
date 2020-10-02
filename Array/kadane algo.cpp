#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> arr={-2,-3,4,-1,-2,1,5,-3};
    int max_sum=INT_MIN,sum=0;
    for(int i=0;i<arr.size();i++)
    {
        if(sum<0)sum=0;
        sum+=arr[i];
        max_sum=max(sum,max_sum);  
         
    }
    cout<<max_sum<<endl;
    return 0;
}
