#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    int n,kt=1;
    do{printf ("Nhap so nguyen duong n: ");
    scanf ("%d",&n);}
    while(n<=0);
    while (n/10!=0){
	if ((n%10)>=((n/10)%10)) {
	kt=0;
	break;
	}
    n=n/10;
	}
 if (kt==1) printf ("So vua nhap la so lui");
 else printf ("So vua nhap khong la so lui");
 getch();
}
