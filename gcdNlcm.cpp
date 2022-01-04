#include<bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n1,n2;
		cin>>n1>>n2;
		cout<<gcd(n1,n2)<<" "<<lcm(n1,n2)<<endl;
	}
	return 0;
}