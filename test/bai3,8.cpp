#include<stdio.h>
int main(){
	float x,y,a,b,c;
	scanf("%f %f", &x,&y);
	a=x*x+y*y;
	b=(x+y)*(x+y);
	c=(x-y)*(x-y);
	printf("%f ",a);
	printf("%f ",b);
	printf("%f ",c);
	return 0;
}
