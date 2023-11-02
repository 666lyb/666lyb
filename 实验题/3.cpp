#include<stdio.h>
#include<math.h>
int main(){
	float a;
	double b;
	scanf("%f\n%lf",&a,&b);
	if(a<1&&b>1)
	printf("%f .%f*10e+00\n%f %fe+00",a,a,b,b);
	else if(a>1&&b<1)printf("%f %fe+00\n.%f %fe+00",a,a,b,b);
	else if(a<1&&b<1)printf("%f .%f*10e+00\n%f .%f*10e+00",a,a,b,b);
	else printf("%f %fe+00\n%f %fe+00",a,a,b,b);
} 
