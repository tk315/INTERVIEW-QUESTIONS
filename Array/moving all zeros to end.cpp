//move all zeros to end without changing the order of non zero elements
#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> arr={1,4,0,2,3,0,7,0,0,0,4};
	int nzidz=-1;
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]!=0)swap(arr[++nzidz],arr[i]);
	}
	for(auto e:arr)cout<<e<<" ";

	return 0;
}
