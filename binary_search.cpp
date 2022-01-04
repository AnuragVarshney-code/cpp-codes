// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,key;
// 		cin>>n>>key;
// 		int arr[n];
// 		for (int i = 0; i < n; ++i)
// 			cin>>arr[i];
// 		int l=0 , r=n-1, flag = 0;
// 		if(key == arr[0] || key == arr[n-1]){
// 			flag = 1 ;
// 			goto output;
// 		}
// 		while(l<=r){
// 			int mid = (l+r)/2;
// 			if(key==arr[mid])
// 				flag = 1;
// 			if(key<arr[mid]){
// 				r = mid-1;
// 			}
// 			else{
// 				l = mid+1;
// 			}
// 		}
// 		output:
// 		if(flag)
// 			cout<<"YES"<<endl;
// 		else
// 			cout<<"NO"<<endl;
// 	}
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int search;
	cin>>search;
	int low = 0, high=n-1, flag = 1;
	while(low<=high){
		int mid = (low+high)/2;
		if(a[mid]==search){
			flag=0;
			cout<<"Found at position "<<mid+1<<endl;
		}
		if(search<a[mid]){
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	if(flag)
		cout<<"not Found"<<endl;
	return 0;
}