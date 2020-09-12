#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/* 8--number of element
   12 3 1 2 -6 5 -8 6 --- array elements
   0 --target
*/

vector<vector<ll>> tripletSum(ll *a,ll n,ll target)
{
	sort(a,a+n);
	vector<vector<ll>>ans;
	for(int i=0;i<n;++i)
	{
		ll cs=a[i];
		ll start=i+1,end=n-1;
		while(start<end)
		{
			if(cs+a[start]+a[end]==target){
				vector<ll> temp={cs,a[start],a[end]};
				ans.push_back(temp);
				start++,end--;
			}
			else if(cs+a[start]+a[end]<target)
				start++;
			else if(cs+a[start]+a[end]>target)
				end--;
		}
	}
	return ans;
}
int main()
{
	ll n;cin>>n;
	ll *a=new ll[n];
	for(int i=0;i<n;++i)
		cin>>a[i];
	ll target;cin>>target;
	vector<vector<ll>> ans=tripletSum(a,n,target);
	for(vector<ll> v: ans)
	{
		for(int i: v)
			cout<<i<<" ";
		cout<<endl;
	}
}
