#include<stdio.h>
#include<math.h>
int main(){
	float x,y;
	scanf("%f%f",&x,&y);
	float min;
	min=(float)x;
	if(y<min){
		min=y;
	}
	printf("%0.2f", min);
	return 0;
}

