#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a =0,b=1;
		cout<<a<<" "<<b<<" ";
		while(n>2){
			int temp = a+b;
			a=b;
			b=temp;
			cout<<b<<" "; 
			n--;
		}
		cout<<endl;
	}
	return 0;
}