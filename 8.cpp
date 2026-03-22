#include<iostream>
#include<string>
using namespace std;
int myAtoi(string s) 
{
    int count =0;
    string result="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ' && count==0)
        {
            count++;
            continue;
        }
        if(s[i]=='0' && count==0)
        {
            count++;
            continue;
        }
        if(isdigit(s[i]))
        {
            result+=s[i];
        }
    }
    return result;
}
int main()
{
   return 0;
}