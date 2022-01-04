#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll factorial(int n){
	ll fact=1;
	for(int i=1;i<=n;++i){
		fact*=i;
	}
	return fact;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,r;
		cin>>n>>r;

		int nCr = factorial(n)/(factorial(n-r)*factorial(r));
		cout<<nCr<<endl;

	}
	return 0;
}