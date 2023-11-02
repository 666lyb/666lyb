#include<stdio.h>

#include<string.h>
int n;
char str[10000]; 
int main(){scanf("%d",&n);
getchar();
for(int i=0;i<n;i++){
	scanf(" %[^\n]",str);
	printf(" %[^\n]",str);

}
}
	
