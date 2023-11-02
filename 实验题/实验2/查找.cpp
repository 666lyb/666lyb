#include<stdio.h>
int a[1005],b[1005],n,m,temp=0,f;
int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]); 
	}
	for(int i=0;i<n;i++){temp++;f=i;if(a[i]==m)break;}
	if(temp!=n)printf("%d",f);
	else printf("%d",-1);}
