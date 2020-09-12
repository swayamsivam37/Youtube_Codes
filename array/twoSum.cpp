#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// o(n^2)-time/ space- o(1)
//vector<ll> twoSum(ll *a,ll n,ll target)
//{
//	vector<ll> ans;
//	for(int i=0;i<n-1;++i)
//	{
//		for(int j=i+1;j<n;++j)
//		{
//			if(a[i]+a[j]==target)
//			{
//				ans.push_back(a[i]);
//				ans.push_back(a[j]);
//				return ans;
//			}
//		}
//	}
//	return ans;
//}


// o(n)-time / o(n)- space
//vector<ll> twoSum(ll *a,ll n,ll target)
//{
//	map<ll,bool> mp;
//	vector<ll> ans;
//	for(int i=0;i<n;++i)
//	{
//		ll fNumber=a[i];
//		if(mp[target-fNumber]==true){
//			ans.push_back(a[i]);
//			ans.push_back(target-a[i]);
//			return ans;
//		}
//		mp[fNumber]=true;
//	}
//	return ans;
//}


//o(nlogn)-time / o(1)-space

vector<ll> twoSum(ll *a,ll n,ll target)
{
	ll start=0,end=n-1;
	vector<ll> ans;
	while(start<end)
	{
		if(a[start]+a[end]==target){
			ans.push_back(a[start]);
			ans.push_back(a[end]);
			return ans;
		}
		else if(a[start]+a[end]<target)
			start++;
		else if(a[start]+a[end]>target)
			end--;
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
	vector<ll> ans=twoSum(a,n,target);
	for(int i: ans)
	{
		cout<<i<<" ";
	}
	
}
