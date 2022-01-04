#include<bits/stdc++.h>
using namespace std;

bool palindrome_or_not(string str){
	int n = str.length();
	for(int i=0;i<n/2;i++){
		if(str[i]!=str[n-i-1])
			return false;
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin>>n;
		if(palindrome_or_not(n)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}