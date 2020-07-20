
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;
int remAnagram(string str1, string str2)
{
	int count1[CHARS] = {0}, count2[CHARS] = {0};
	for (int i=0; str1[i]!='\0'; i++)
		count1[str1[i]-'a']++;
	for (int i=0; str2[i]!='\0'; i++)
		count2[str2[i]-'a']++;
	int result = 0;
	for (int i=0; i<26; i++)
		result += abs(count1[i] - count2[i]);
	return result;
}

// Driver program to run the case
int main()
{
	string str1 = "bcadeh", str2 = "hear";
	cout << remAnagram(str1, str2);
	return 0;
}
