#include<stdio.h>
int n,c,W=0,V=0;
 
struct good//结构体和数组的名称不能相同； 
{
    int No;      
     float w;  
     float v;  
    float pw; 
}a[1000];

int main(){
scanf("%d%d",&n,&c);
		for(int i=0;i<n;i++)
			{scanf("%f%f",&a[i].w,&a[i].v);}
	for(int i=0;i<n;i++){a[i].pw=a[i].v/a[i].w;}
		for(int i=0;i<n;i++)
		{for(int j=0;j<n-1;j++)//注意j不能数组越界 
			{if(a[j].pw<a[j+1].pw)
				{struct good s=a[j];a[j]=a[j+1];a[j+1]=s;
				}
			}
	}
	for(int i=0;i<n;i++){if(W>c-a[i].w)break;else{W+=a[i].w;V+=a[i].v;
	} 
	}
		printf("%d\n%d ",W,V);
	}




