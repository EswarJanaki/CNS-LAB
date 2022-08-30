#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int k;cin>>k;
	string ans;
	for(int i=0;i<s.length();i++){
		if((s[i]-k)>='A'){
			ans+=(s[i]-k);
		}
		else{
			int aa=int(s[i])-k-65;
			ans+=('Z'+aa+1);
		}
	}
	cout<<ans<<endl;
	return 0;
	
}
