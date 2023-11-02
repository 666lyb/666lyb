#include<stdio.h>

#include<iostream>


const int maxn=100000;
int a,n,w[maxn],v[maxn],wi,vi,i,j,dp[maxn][1005],num=1; 
bool x[maxn]={1};
int main(){
	scanf("%d%d",&a,&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&w[i]);}
		for(i=0;i<n;i++){
		scanf("%d",&v[i]);}
		
		for(i=0;i<n;i++)
		for(j=a;j>=1;j--){
		if(dp[i-1][j]>dp[i-1][j-w[i]]+v[i]){dp[i][j]=dp[i-1][j];x[i]=0;
		}
		else {dp[i][j]=dp[i-1][j-w[i]]+v[i];x[i]=1;
		}}
	//we+=y[i]*w[i];`
		
	
		for(i=0;i<n;i++)
	{if(x[i]==1)printf("%d",i+1);
	}	for(i=0;i<n ;i++){vi+=x[i]*v[i];
	}printf("%d ",vi);
	for(i=0;i<n ;i++){wi+=x[i]*w[i];
} printf("%d",wi);}
