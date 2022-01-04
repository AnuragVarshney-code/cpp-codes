#include<bits/stdc++.h>
using namespace std;
 int main(){
    string s;
    int str_to_int=0;
    long power=1;
    getline(cin,s);
    for(int i=s.size()-1;i>=0;--i)
    {   str_to_int+=(s[i]-'0')*power;
        power*=10;
    }
    cout<<str_to_int;
    
    return 0;
 }