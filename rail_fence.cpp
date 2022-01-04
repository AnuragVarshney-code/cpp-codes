#include<bits/stdc++.h>
using namespace std;

string encryption(string str){
	string temp1="\0",temp2="\0";
	for (int i = 0; i < str.length(); ++i)
	{
		if(i%2==0)
			temp1.push_back(str[i]);
		else
			temp2.push_back(str[i]);
	}
	temp2=temp2+temp1;
	return temp2;
}

string decryption(string str){
	string actual="\0";
	for (int i = 0; i < str.length(); ++i)
	{
		if(i%2==0)
			actual.push_back(str[(str.length()/2)+(i/2)]);
		else
			actual.push_back(str[i/2]);
	}
	return actual;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	getline(cin,str);
	string out=encryption(str);
	cout<<"BEFORE ENCRYPTION:\n\t"<<out<<endl;
	cout<<"AFTER DECRYPTION:\n\t"<<decryption(out);
	return 0;	
}