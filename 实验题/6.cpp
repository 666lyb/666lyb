#include<stdio.h>
//#include<iostream>
#include<math.h>
int a;
double b=0.00;
int main(){
	scanf("%d",&a);
	for(int i=1;;++i)
	{if(i%2==1)b+=1/(2.0*i-1.0);
	else b-=1/(2.0*i-1.0);if(1/(2.0*i+1.0)<=pow(10,-a))break;}
	printf("%lf",4*b);
	}
	
	
