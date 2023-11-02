#include<stdio.h>
//以下三行都没有用#include<iostream>
#include<math.h>
using namespace std;
int a[3][3],b[3][3],c[3][3],i,j; 
int main(){
for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{scanf("%d",&a[i][j]);
}
for(i=0;i<3;i++)
for(j=0;j<3;j++){scanf("%d",&b[i][j]);//输入数组时也要取地址符！！！ 
}
	
	for(i=0;i<3;i++){for(j=0;j<3;j++){printf("%d\t",a[i][j]+b[i][j]);
}printf("\n");
	}

printf("\n");

for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
		{printf("%d\t",a[i][j]-b[i][j]);
}printf("\n");
}printf("\n");

for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
		{for(int p=0;p<3;p++){
			c[i][j]+=a[i][p]*b[p][j];//注意矩阵的运算怎么表示 
		}printf("%d\t",c[i][j]);
	}printf("\n");
}printf("\n");

for(i=0;i<3;i++)
	{for(j=0;j<3;j++)
		{printf("%d\t",a[j][i]);
}printf("\n");//在每一次内循环之后都要换行 
}printf("\n");

} 
