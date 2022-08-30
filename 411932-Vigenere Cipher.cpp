#include<bits/stdc++.h>
using namespace std; 
string cipherText(string s, string k)
{
	string CT;

	for (int i = 0; i < s.size(); i++)
	{
		char x = (s[i] + k[i]) %26;
		x += 'A';
		CT.push_back(x);
	}
	return CT;
}

string generateKey(string s, string k)
{
	int x = s.length();
	for (int i = 0; ; i++)
	{
		if (x == i)
			i = 0;
		if (k.length() == s.length())
			break;
		k.push_back(k[i]);
	}
	return k;
}

string originalText(string CT, string k)
{
	string OT;

	for (int i = 0 ; i < CT.size(); i++)
	{
		char x = (CT[i] - k[i] + 26) %26;
		x += 'A';
		OT.push_back(x);
	}
	return OT;
}
int main()
{
	string s,k;
	cin>>s>>k;
	string key = generateKey(s, k);
	string CT = cipherText(s, key);
	cout << "Cipher Text:"<< CT << endl;
	cout << "Decrypted Text:"<< originalText(CT, key)<<endl;
	return 0;
}

