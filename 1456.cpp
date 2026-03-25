#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c){
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int maxVowels(string s, int k) {
    int n = s.size();
    int l = 0, r = 0;
    int count = 0, ans = 0;

    while(r < n){
        if(isVowel(s[r])) count++;

        if(r - l + 1 > k){
            if(isVowel(s[l])) count--;
            l++;
        }

        if(r - l + 1 == k){
            ans = max(ans, count);
        }

        r++; // important
    }

    return ans;
}

int main() {
    string s;
    int k;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter k: ";
    cin >> k;

    int result = maxVowels(s, k);

    cout << "Maximum vowels in substring of size " << k << " = " << result << endl;

    return 0;
}