#include<bits/stdc++.h>
using namespace std;

//this is a fuction to reverse an string

string reverse(string str){
	string reversing = "";
	for (int i = str.length()-1; i >=0 ; --i)
	{
		reversing.push_back(str[i]);
	}
	return reversing;
}

//this function is used to convert string into an integer

int str_to_int(string s){
	int str_to_int=0;
	long power=1;
	for(int i=s.size()-1;i>=0;--i)
    {   str_to_int+=(s[i]-'0')*power;
        power*=10;
    }
    return str_to_int;
}

//this is the code for binary to decimal conversion

int binary_to_decimal(int n){
	int final_num=0,pow_2=1;
	while(n>0){
		int digit = n%10;
		final_num+=(digit*pow_2);
		pow_2*=2;
		n/=10;
	}
	return final_num;
}

//this is the code for octal to decimal conversion

int octal_to_decimal(int n){
	int final_num=0,pow_8=1;
	while(n>0){
		int digit = n%10;
		final_num+=(digit*pow_8);
		pow_8*=8;
		n/=10;
	}
	return final_num;
}

//this is the code for hexadecimal to decimal conversion

int hexadecimal_to_decimal(string str){
	int final_num=0,pow_16=1;
	for (int i = str.length()-1; i >=0; i--)
	{
		if(str[i]>='0'&&str[i]<='9'){
			int digit = str[i]-'0';
			final_num+=(digit*pow_16);
		}
		if(str[i]>='A'&&str[i]<='F'){
			int digit = (str[i]-'A')+ 10;
			final_num+=(digit*pow_16);
		}
		pow_16*=16;
	}
	return final_num;
}

//this is the code for decimal to binary conversion

int decimal_to_binary(int n){
	string str = "";
	while(n>0){
		int digit = n%2;
		str.push_back(to_string(digit)[0]);
		n/=2;
	}
	return str_to_int(reverse(str));
}


//this is the code for decimal to octal conversion

int decimal_to_octal(int n){
	string str = "";
	while(n>0){
		int digit = n%8;
		str.push_back(to_string(digit)[0]);
		n/=8;
	}
	return str_to_int(reverse(str));
}

//this is the code for decimal to octal conversion

string decimal_to_hexadecimal(int n){
	string str = "";
	while(n>0){
		int digit = n%16;
		if(digit>=0 && digit<=9)
			str.push_back(to_string(digit)[0]);
		else
			str.push_back('A'+ (digit-10));

		n/=16;
	}
	return reverse(str);
}



int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		cout<<decimal_to_hexadecimal(n)<<endl;
	}
	return 0;
}

































