#include<stdio.h>
#include<math.h>
int a,b,n,m,k,temp=0,f,i,l;
char c[10];
int s[10];
int main(){
	scanf("%d%d",&n,&m);
	for(i=0;i<10;i++){
		scanf("%s",&c);
	};
	int n=c.length();
	for(i=n-1;i>=0;i--)
	if(c[i]>='A'&&c[i]<='Z')s[n-1-i]=c[i]-'A'+10;
		else s[n-1-i]= c[i];
	 for(i=0;i<n;i++)int l=pow(m,i);k+=s[i]*l;printf("%d",k);}
