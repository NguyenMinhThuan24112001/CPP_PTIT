#include<stdio.h>
#include<math.h>
const float PI=3.14;
int main(){
	float x,y,z,a;
	float g,h;
	scanf("%f %f %f",&x, &y,&z);
	a=float(cos(y*PI/180));
	g=float((x-(z*a)));
	
	h=abs(y);
	printf("%f", h);
}
