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


int nCr(int n , int r){
	int nCr = factorial(n)/(factorial(n-r)*factorial(r));
	return nCr;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j <= i; ++j)
			{
				cout<<nCr(i,j)<<"\t";
			}
			cout<<endl;
		}
	}
	return 0;
}