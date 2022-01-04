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
		int maxlen=2;
		int prevDiff=arr[1]-arr[0],i=2;
		int currlen=2;
		while(i<n){
			int currDiff=arr[i]-arr[i-1];
			if(prevDiff==currDiff){
				currlen++;
			}
			else{
				prevDiff=currDiff;
				currlen=2;
			}
			maxlen=max(currlen,maxlen);
			i++;
		}
		cout<<maxlen<<endl;
	}
	return 0;
}