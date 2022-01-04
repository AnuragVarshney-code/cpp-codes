#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int str_to_int;
    string am_or_pm = s.substr(s.length()-2,s.length()-1);
    string hours = s.substr(0,2);
    if(am_or_pm == "AM"){
        if(hours == "12"){
            int str_to_int=0;
            long power=1;
            for(int i=hours.size()-1;i>=0;--i)
            {   str_to_int+=(hours[i]-'0')*power;
                power*=10;
            }
            str_to_int=str_to_int-12;
            hours=to_string(str_to_int);
            s[0]=hours[0];
            s[1]=hours[0];
            return s.substr(0,s.size()-2);
        }
        else{
            return s.substr(0,s.size()-2);
        }
    }
    else {
        if(hours == "12"){
            return s.substr(0,s.size()-2);
        }
        else{
            int str_to_int=0;
            long power=1;
            for(int i=hours.size()-1;i>=0;--i)
            {   str_to_int+=(hours[i]-'0')*power;
                power*=10;
            }
            str_to_int=str_to_int+12;
                hours=to_string(str_to_int);
                s[0]=hours[0];
                s[1]=hours[1];
                return s.substr(0,s.size()-2);
        }
    }
}

int main()
{
    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout<<result;

    return 0;
}
