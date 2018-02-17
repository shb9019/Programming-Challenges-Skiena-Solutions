/**
	Standard 3n+1 problem.
	https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=&problem=36
**/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000

ll dp[1000001] = {0};

ll findAns(ll k) {
	if(k==1)return 0;
	else if(k<=MAX && dp[k]!=0){ 
		return dp[k];
	}	
	else {
		if(k%2 == 0) {
			ll temp = 1 + findAns(k/2);
			if (k<=MAX) dp[k] = temp; 
			return temp;
		}
		else {
			ll temp = 2 + findAns((3*k + 1)/2); 
			if (k<=MAX) dp[k] = temp; 
			return temp;
		}
	}
}

int main() {
	ll a,b;
	while(cin>>a>>b){
		ll k;
		ll max = -1;
		ll ka = a, kb = b;
		if(a>b) swap(a,b);
		for(k=a;k<=b;k++){
			ll ans = findAns(k);
			if(ans>max) max=ans;
		}
		cout<<ka<<" "<<kb<<" "<<max+1<<endl;
	}
	return 0;
}