#include<bits/stdc++.h>
using namespace std;

string plain_to_caeser(string str,int shift){
	for (int i = 0; i < str.length(); ++i)
	{
		if(str[i]>='a'&&str[i]<='z'){
			if(str[i]+shift >'z')
				str[i]=('a'-1)+((str[i]+shift)-'z');
			else
				str[i]=str[i]+shift;
		}
		else if(str[i]>='A'&&str[i]<='Z'){
			if(str[i]+shift >'Z')
				str[i]=('A'-1)+((str[i]+shift)-'Z');
			else
				str[i]=str[i]+shift;
		}
		else
			continue;
	}
	return str;
}

string caeser_to_plain(string str,int shift){
	for (int i = 0; i < str.length(); ++i)
	{
		if(str[i]>='a'&&str[i]<='z'){
			if(str[i]-shift <'a')
				str[i]=('z'+1)+(str[i]-shift-'a');
			else
				str[i]=str[i]-shift;
		}
		else if(str[i]>='A'&&str[i]<='Z'){
			if(str[i]-shift <'A')
				str[i]=('Z'+1)+(str[i]-shift-'A');
			else
				str[i]=str[i]-shift;
		}
		else
			continue;
	}
	return str;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	int shift;
	getline(cin,str);
	cin>>shift;
	cin.ignore();
	string out=plain_to_caeser(str,shift);
	cout<<"BEFORE ENCRYPTION:\n\t"<<out<<endl;
	cout<<"AFTER DECRYPTION:\n\t"<<caeser_to_plain(out,shift);
	return 0;	
}