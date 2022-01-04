#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int temp[n+1];
		temp[0]=0;
		for (int i = 0; i < n; ++i)
		{
			temp[i+1]=temp[i]+arr[i];
		}
		int mx=INT_MIN;
		for (int i = 1; i <= n; ++i)
		{
			int sum = 0;
			for (int j = 0; j < i; ++j)
			{
				sum = temp[i]-temp[j];
				mx=max(sum,mx);
			}
		}
		cout<<mx<<endl;
		for (int i = 0; i <= n; ++i)
		{
			cout<<temp[i]<<" ";
		}
	}
	return 0;
}