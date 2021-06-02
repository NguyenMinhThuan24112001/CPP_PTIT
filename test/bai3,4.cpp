#include<stdio.h>
#include<math.h>
const float PI=3.14;
int main(){
	float x,y,z,c;
	scanf("%f %f %f", &x,&y,&z);
	float h=((x+y+z)/(x*x+y*y+1));
	float a=cos(y*PI/180);
	float g=(x-z*a);
	if(g>=0){
		c=h-g;
	}
	else
	{
		c=h-(-1)*g;
	}
	printf("%f", c);
	return 0;
}
