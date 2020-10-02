https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0
#include <iostream>
#include<unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
	int tt;
	cin>>tt;
	while(tt--)
	{
	    unordered_set <int> s;
	    int n1,n2;
	    cin>>n1>>n2;
	    for(int i=0;i<n1;i++)
	    {
	        int a;
	        cin>>a;
	        s.insert(a);
	    }
	    for(int i=0;i<n2;i++)
	    {
	        int a;
	        cin>>a;
	        s.insert(a);
	    }
	    cout<<s.size()<<endl;
	}
	return 0;
}
