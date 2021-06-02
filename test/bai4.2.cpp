#include<stdio.h>
#include<math.h>
long long ngto(long long n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	long long n;
	scanf("%d", &n);
	if(ngto(n)){
		printf("La so nguyen to");
	}else{
		printf("Khong phai la so nguyen to");
	}
	return 0;
}
