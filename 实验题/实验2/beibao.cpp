#include<stdio.h>
int n,c,W=0,V=0;
 
struct good 
{
    int No;      
     float w;  
     float v;  
    float pw; 
}a[1000],temp[1000];

int main(){
struct temp//
{
    int No;     
    float w;  
     float v;   
    float pw=0; 
}temp[1000];
	scanf("%d%d",&n,&c);
		for(int i=0;i<n;i++)
			{scanf("%f%f",&a[i].w,&a[i].v);}
	for(int i=0;i<n;i++){a[i].pw=a[i].v/a[i].w;}
		for(int i=0;i<n;i++)
		{for(int j=0;j<n-1;j++)//注意j不能数组越界 
			{if(a[j].pw<a[j+1].pw)
				{temp[j].pw=a[j].pw;a[j].pw=a[j+1].pw;a[j+1].pw=temp[j].pw;
				temp[j].w=a[j].w;a[j].w=a[j+1].w;a[j+1].w=temp[j].w;
				temp[j].v=a[j].v;a[j].v=a[j+1].v;a[j+1].v=temp[j].v;
	}
	}printf("%f %f %f\n",a[i].w,a[i].v,a[i].pw);
	}
	for(int i=0;i<n;i++){if(W>c-a[i].w)break;else{W+=a[i].w;V+=a[i].v;
	} 
	}
		printf("%d\n%d ",W,V);
	}




