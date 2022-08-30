#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin>>s;
    int k;
    cout<<"Enter the Key:"<<endl;
    cin>>k;string ans;
    k%=26;
    map<char,int> m;
    for(int i=0;i<s.length();i++){
        if(int(s[i]+k)>90){
            m[s[i]]=int(s[i]+k)-26;
            
        }
        else m[s[i]]=int(s[i]+k);

        ans+=char(m[s[i]]);
        
    }
    cout<<ans<<endl;
    
    
    return 0;
    
    
    
}
