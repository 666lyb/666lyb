#include<stdio.h>
int a[1005],b[1005],n,temp;
int main(){
	scanf("%d",&n);getchar();
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]); 
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++)//注意j不能数组越界 
			{if(a[j]>a[j+1])
			{temp=a[j];a[j]=a[j+1];a[j+1]=temp;
	}
	}
	
		
	}for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
