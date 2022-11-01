//#include<bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;
typedef long long int ll;
ll pow(ll a,ll b){
    ll ans=1;
    while(b>0){
    if(b&1){
        ans*=a;
    }
    a*=a;
    b>>=1;
    }
    return ans;
}
ll power(ll a, ll b,ll c)
{
	return(b==1)?a:(((ll)pow(a, b)) % c);
}
int main()
{
	ll P, G, x, a, y, b, ka, kb;
	P = 23; 
	cout << "The value of P : " << P << endl;

	G = 9; 
	cout << "The value of G : " << G << endl;
	a = 4;
	cout << "The private key a for Alice : " << a << endl;
	x = power(G, a, P); 
	b = 3; 
	cout << "The private key b for Bob : " << b << endl;
	y = power(G, b, P);
	ka = power(y, a, P);
	kb = power(x, b, P); 
	cout << "Secret key for the Alice is : " << ka << endl;
	cout << "Secret key for the Alice is : " << kb << endl;
	return 0;
}

