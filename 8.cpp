#include<iostream>
#include<string>
using namespace std;

int myAtoi(string s) 
{
    string result = "";

    for(int i = 0; i < s.size(); i++)
    {
        if(isdigit(s[i]))
        {
            result += s[i];
        }
        else if(result.size() > 0)
        {
            break; // stop when digits end
        }
    }

    // convert string to int
    int num = 0;
    for(char c : result)
    {
        num = num * 10 + (c - '0');
    }

    return num;
}

int main()
{
    string s = "13345ejdje";
    cout << myAtoi(s) << endl;

    return 0;
}