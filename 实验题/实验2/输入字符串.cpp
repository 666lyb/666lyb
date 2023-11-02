#include<stdio.h>
int n;
int main(){
	scanf("%d",&n);
	getchar();
	while(n--){
		char c=getchar();
		while(c!='\n'&&c>31)
		{putchar(c);c=getchar();
		}printf("\n");
	}

} 
