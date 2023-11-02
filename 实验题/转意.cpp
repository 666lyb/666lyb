#include<stdio.h>
int main(){
	short int a;
	int b;
	long int c;
	long long d;
	unsigned int e;
	scanf("%hd\n%d\n%ld\n%lld\n%ud\n",&a,&b,&c,&d,&e);
	printf("%d\n%ud\n%\ooo\n%\xhh\n%\xhh",a,b,c,d,e);
	
}
