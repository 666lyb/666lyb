#include<stdio.h>
#include<iostream>
int a,b,c,d,ans,num;
int main(){
	scanf("%d",&a);
	
	num=a/2;b=0;c=0;
	for(int i=0; ;i++)
	{ans+=b/2+c/4;
	if(i==0)b=num,c=num;
	b=num%2;c=num/4+num%4;
	
	
	if(num/2==0&&num/4==0)break;
	}
	printf("%d %d %d %d",ans,b,c,a/2);
} 
