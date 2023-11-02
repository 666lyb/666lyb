#include<stdio.h>
#include<string.h>
int n,f[100000];
int main(){scanf("%d",&n);for(int i=1;i<=n;i++){f[1]=0;f[2]=1;f[i]=f[i-1]+f[i-2];
}if(n==1)printf("%d",0);else if(n==2)printf("%d",1);
else printf("%d",f[n]);

	
}
