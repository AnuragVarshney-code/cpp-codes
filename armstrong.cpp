#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,sum=0;
		cin>>n;
		int original_num = n;
		while(n>0){
			int digit = n % 10;
			sum+=(digit*digit*digit);
			n/=10;
		}
		if(original_num == sum)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}