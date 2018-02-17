#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,count=1;
	while(cin>>n>>m){
		if(n==0&&m==0) {
			break;
		}
		else if(n!=0&&m!=0) {
			char mat[n][m];
			for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>mat[i][j];
			int sweeper[n][m] = {0};
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					sweeper[i][j] = 0;
					if(mat[i][j]=='*') {
						continue;
					}
					if(j>0&&mat[i][j-1]=='*') sweeper[i][j]++;
					
					if(j<m-1&&mat[i][j+1]=='*') sweeper[i][j]++;
					
					if(i>0&&mat[i-1][j]=='*') sweeper[i][j]++;
					
					if(i<n-1&&mat[i+1][j]=='*') sweeper[i][j]++;
					
					if(j>0&&i>0&&mat[i-1][j-1]=='*') sweeper[i][j]++;
					
					if(i<n-1&&j>0&&mat[i+1][j-1]=='*') sweeper[i][j]++;
					
					if(i>0&&j<m-1&&mat[i-1][j+1]=='*') sweeper[i][j]++;
					
					if(j<m-1&&i<n-1&&mat[i+1][j+1]=='*') sweeper[i][j]++;
				}
			}

			cout<<"Field #"<<count<<":\n";
			count++;
			for(int i=0;i<n;i++) {
				for(int j=0;j<m;j++) {
					if(mat[i][j]=='*') cout<<"*";
					else cout<<sweeper[i][j];
				}
				cout<<endl;
			}
			cout<<endl;
		}
		else {
			count++;
			cout<<"Field #"<<count<<":\n";
			cout<<endl;
		}
	}
	return 0;
}