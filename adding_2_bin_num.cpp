#include<bits/stdc++.h>
using namespace std;

//this function is used to reverse the string
string reverse(string str){
	string reversing = "";
	for (int i = str.length()-1; i >=0 ; --i)
	{
		reversing.push_back(str[i]);
	}
	return reversing;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b,final_str="";
		cin>>a>>b;
		int carry=0;
		int i=a.length()-1,j=b.length()-1;
		while(i>=0 && j>=0){

			//case 1 when both digits are different

			if(a[i]!=b[j]){
				if(carry == 0){
					final_str.push_back('1');
					carry=0;
				}
				else{
					final_str.push_back('0');
					carry=1;
				}
			}
			else{
				if(a[i]=='0' && b[j] =='0'){
					if(carry == 0){
						final_str.push_back('0');
						carry=0;
					}
					else{
						final_str.push_back('1');
						carry=0;
					}
				}
				else{
					if(carry == 0){
						final_str.push_back('0');
						carry=1;
					}
					else{
						final_str.push_back('1');
						carry=1;
					}
				}
			}
			i--;
			j--;
		}
		// while(i>0){
		// 	if(a[i]=='0'){
		// 		if(carry == 0){
		// 		final_str.push_back('0');
		// 		carry=0;
		// 	}
		// 	else{
		// 		final_str.push_back('1');
		// 		carry=0;
		// 	}
		// 	}
		// 	else{
		// 		if(carry == 0){
		// 		final_str.push_back('1');
		// 		carry=0;
		// 	}
		// 	else{
		// 		final_str.push_back('0');
		// 		carry=1;
		// 	}
		// 	}
		// 	i--;
		// }
		// while(j>0){
		// 	if(a[i]=='0'){
		// 		if(carry == 0){
		// 		final_str.push_back('0');
		// 		carry=0;
		// 	}
		// 	else{
		// 		final_str.push_back('1');
		// 		carry=0;
		// 	}
		// 	}
		// 	else{
		// 		if(carry == 0){
		// 		final_str.push_back('1');
		// 		carry=0;
		// 	}
		// 	else{
		// 		final_str.push_back('0');
		// 		carry=1;
		// 	}
		// 	}
		// 	j--;
		// }
		while(carry!=0){
			final_str.push_back('1');
			carry = 0;
		}
		cout<<reverse(final_str);
	}
	return 0;
}