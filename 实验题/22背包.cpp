#include<stdio.h>
#include<iostream>
using namespace std;

int a,n,w[21],v[21],wi=0,vi=0,V=0,W=0,i,j,k=0,l,num=1; 
bool x[20],y[20];
int main(){
	scanf("%d%d",&a,&n);
	for(i=0;i<n;i++)num*=2;
	for(i=0;i<n;i++){
		scanf("%d",&w[i]);}
		
		for(i=0;i<n;i++){
		scanf("%d",&v[i]);}
		
	j=num-1;
		while(j--)
		{if(j%2==1){x[i]=1;wi+=w[i],vi+=v[i];cout<<wi<<" "<<vi<<" ";}
		else {x[i]=0;}
		i++;} 
		if(wi<=a&&vi>V){W=wi;V=vi;
			for(i=0;i<n;i++)
			{y[i]=x[i];}
				
					
		
				}
	
	
	for(i=0;i<n;i++)
	if(y[i]==1)printf("%d ",i+1);printf("%d ",W);
	printf("%d ",V);
	
		
		}

