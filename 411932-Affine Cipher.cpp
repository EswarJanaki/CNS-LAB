#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
 return b==0 ? a : gcd(b,a%b);
}
string fun(string s,int a,int b){
	string ans;
	for(int i=0;i<s.length();i++){
		ans+=('A'+(a*(s[i]-'A')+b)%26);
		//cout<<ans<<" ";
	}
	return ans;
}
int advt(int a,int b){
	while(a>25){
	a=a-26;	
	}
	while(a<0){
	a=a+26;
	}
	return a;
}
int mulp(int a){
	for(int i=0;i<26;i++)
	{
		if(((a%26)*(i%26))%26==1)
			return i;
	}
}
string fun1(string s,int a,int b){
	string ans;
	for(int i=0;i<s.length();i++){
		int ad=advt(((s[i]-'A')-b),26);
		int mul=mulp(a);
		ans+=(ad*mul)%26+'A';
	}
	return ans;
	
}
int main(){
	string s;
	int  a,b;
	cin>>s>>a>>b;
	if(gcd(a,26)!=1)swap(a,b);
	if(gcd(a,26)!=1)cout<<"Enter Valid Keys\n";
	string ans=fun(s,a,b);
	cout<<"Encrypted Text : "<<ans<<endl;
	string aa=fun1(ans,a,b);
	cout<<"Dencrypted Text : "<<aa<<endl;
	return 0;
	
}
