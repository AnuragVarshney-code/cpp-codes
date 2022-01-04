#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,max=INT_MIN,min=INT_MAX;
		cin>>n;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			if(max<arr[i])
				max=arr[i];
			if(min>arr[i])
				min=arr[i];
		}
		cout<<max<<" "<<min<<endl;
	}
	return 0;
}