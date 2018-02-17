#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	while(cin>>n){
		if(n==0) break;
		float cost[n], sum=0;
		for(int i=0;i<n;i++) {
			float c;
			cin>>c;
			cost[i] = c*100;
			sum+=cost[i];
		}
		float avg = (float)sum/(float)n;
		float balance = 0;
		for(int i=0;i<n;i++) balance += abs(cost[i]-avg);
		cout<<fixed<<setprecision(2)<<balance/2<<endl;
	}
	return 0;
}