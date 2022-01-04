#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,key;
		cin>>n>>key;
		int arr[n];
		for (int i = 0; i < n;++i)
		{
			cin>>arr[i];
			if(key == arr[i]){
				cout<<i+1<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}