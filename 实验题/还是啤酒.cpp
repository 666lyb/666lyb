#include<stdio.h>
int a,b,c,d,ans,num; 
int main(){
	
	scanf("%d",&a);
	for(int i=0; ;i++){
		if(i==0){ans=a/2;num=a/2;b=num;c=num;
		}
		else{num=b/2+c/4;ans+=num;
		b=b%2+num;c=c%4+num;
		}if(b/2<1&&c/4<1)break;
	}printf("%d %d %d %d",ans,b,c,a%2);
} 
