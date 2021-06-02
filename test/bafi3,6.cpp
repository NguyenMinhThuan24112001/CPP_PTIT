#include<stdio.h>
int main(){
	float x,y;
	scanf("%f %f", &x,&y);
	float c=y*y*y*y*(y*y+x*y+x*x)+x*x*x*(y*y*y+x*y*y+x*x*y+x*x*x);
	printf("%f", c);
	return 0;
}
