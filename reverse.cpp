#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
	int reverse=0;
	while(n>0){
		int digit = n%10;
		reverse = reverse*10 + digit;
		n/=10;
	}
	return reverse;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<reverse(n)<<endl;
	}
	return 0;
}