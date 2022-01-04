#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string str;
		getline(cin,str);
		int max_word_len = INT_MIN,currLen=0;max_word_len = max(currLen,max_word_len);
		for (int i = 0; i < str.length(); ++i)
		{
			if (str[i]==' ')	
			{
				currLen = 0;
			}
			max_word_len = max(currLen,max_word_len);
			currLen++;
		}
		cout<<max_word_len<<endl;
	}
	return 0;
}