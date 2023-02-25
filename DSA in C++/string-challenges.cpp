#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout << endl << endl;
    
    string s = "hasdfhasjflhkj";
    int freq[26];
    fill(freq, freq + 26, 0);

    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;
    }
    int maxNum = 0;
    char recurrChar = 'a';
    for (int i = 0; i < 26; i++)
    {
        maxNum = max(maxNum, freq[i]);
        if (freq[i] == maxNum)
        {
            recurrChar = i + 'a';
        }
    }
    
    cout << maxNum << " " << recurrChar;
    cout << endl << endl;
    return 0;
}