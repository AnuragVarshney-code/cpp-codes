#include<bits/stdc++.h>
using namespace std;

int maximum(int *arr,int n){
	int max = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]>max)
			max = arr[i];
	}
	return max;
}

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
		int record_breaking_days=0;
		int maxPeople = maximum(arr,n);
		int i=0,flag=0;
		if (arr[0]>arr[1])
		{
			record_breaking_days++;
		}
		if(n==1){
			cout<<1;
			return 0;
		}
		while(arr[i]!=maxPeople){
			if (arr[i]>arr[i+1] && arr[i]>arr[i-1])
			{
				record_breaking_days++;
			}
			flag = 1;
			i++;
		}
		if (flag)
			cout<<record_breaking_days+1<<endl;
		else
			cout<<record_breaking_days<<endl;

		}
	return 0;
}