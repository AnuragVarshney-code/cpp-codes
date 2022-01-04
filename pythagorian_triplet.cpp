#include<bits/stdc++.h>
using namespace std;
bool check(int a, int b, int c){
	if((a*a) == ((b*b)+(c*c))){
		return true;
	}
	else
		return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int x=max(a,max(b,c)),y,z;
		if(x == a){
			y=b;
			z=c;
		}
		if(x == b){
			y=a;
			z=c;
		}
		if(x == c){
			y=b;
			z=a;
		}
		if(check(x,y,z))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}