#include<bits/stdc++.h>
using namespace std;
vector<string> findMatchedWords(vector<string> dict,string pattern);
int main(){
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    string tt;
    cin>>tt;
    vector<string>res=findMatchedWords(s,tt);
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
string encodeString(string str)
{
    unordered_map<char, int> map;
    string res = "";
    int i = 0;
    for (char ch : str) {
        if (map.find(ch) == map.end())
            map[ch] = i++;
        res += to_string(map[ch]);
    }
    return res;
}
vector<string> findMatchedWords(vector<string> dict,string pattern)
{
    vector<string>w;
    int len = pattern.length();
    string hash = encodeString(pattern);
    for (string word : dict) {
        if (word.length() == len && encodeString(word) == hash)
            w.push_back(word);
    }
    return w;
}
