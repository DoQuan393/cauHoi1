#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	sort(a, a + n);
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout<<a[i]<<" ";
		}
	}
	
	sort(a , a + n);
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			cout<<a[i]<<" ";
		}
	}
	
	return 0;
}