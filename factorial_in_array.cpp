#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
			int a[200];
			int n;
			a[0]=1;
			cin>>n;
			int colNo=1;
			for (int i = 1; i <= n; ++i)
			{
					int temp=0;
					for (int j = 0; j < colNo; ++j)
							{
									int x=(a[j]*i)+temp;
									a[j]=x%10;
									temp=x/10;
							}	
					while(temp>0){
					// cout<<i<<" ";
					a[colNo]=temp%10;
					temp/=10;
					colNo++;
					}	
			}
			for (int j = colNo-1; j >=0; j--)
			{
				cout<<a[j];
			}
			cout<<endl;
	}
	return 0;
}



/*
int a[200], n1,n2;
cin>>n1>>n2;
int i=0;
while(n1>0){
	int digit = n1%10;
	a[i]=digit;
	n1/=10;
	i++;
}
int temp=0;
for (int j = 0; j <i ; ++j)
{
	int x=(a[j]*n2)+temp;
	a[j]=x%10;
	temp=x/10;
	// cout<<j<<" "<<a[j]<<" "<<x<<" ";
}
while(temp>0){
	// cout<<i<<" ";
	a[i]=temp%10;
	temp/=10;
	i++;

for (int j = i-1; j >=0; j--)
{
	cout<<a[j];
}
cout<<endl;
*/