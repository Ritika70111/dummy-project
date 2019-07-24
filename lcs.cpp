#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
	if(a>b){
		return a;
	}
	else {
		return b;
	}
}
int lcs(char *x,char* y,int m,int n){
	int L[m+1][n+1];
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(i==0||j==0){
				L[i][j]=0;
			}
			else if(x[i-1]==y[j-1]){
				L[i][j]=L[i-1][j-1]+1;
			}
			else{
				L[i][j]=max(L[i-1][j],L[i][j-1]);
			}
		}
	}
	return L[m][n];
}
int main(){
	char x[]="AGGTAB";
	char y[]="GXTYAYB";
	int m=strlen(x);
	int n=strlen(y);
	cout<<"length of lcs"<<lcs(x,y,m,n)<<m<<n;
	return 0;
}
